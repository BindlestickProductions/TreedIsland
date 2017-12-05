#pragma once
#include <AzCore/EBus/EBus.h>
#include <GridMate/Session/Session.h>

namespace TreedIsland
{
    class ServerPlayerBodyInterface
        : public AZ::EBusTraits
    {
    public:
        virtual ~ServerPlayerBodyInterface() = default;

        // EBusTraits overrides
        static const AZ::EBusHandlerPolicy HandlerPolicy =
            AZ::EBusHandlerPolicy::Single;
        static const AZ::EBusAddressPolicy AddressPolicy =
            AZ::EBusAddressPolicy::ById;
        using BusIdType = AZ::EntityId;

        virtual void SetAssociatedPlayerId(
            const GridMate::MemberIDCompact& player) = 0;
    };

    using ServerPlayerBodyBus = AZ::EBus<ServerPlayerBodyInterface>;
} // namespace TreedIsland