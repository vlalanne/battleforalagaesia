	; All the standard EVA events for a 'normal' unit

	EvaEventDamagedOwner	= DwarvenUnitUnderAttack 		;Eva event to trigger when unit is damaged
	EvaEventDamagedFromShroudedSourceOwner = DwarvenUnitUnderAttackFromShroudedUnit 
	EvaEventDamagedByFireOwner  = GenericUnitBeingBurned  ; Special reaction to fire damage
	EvaEventAmbushed = DwarvenUnitAmbushed ; Special damaged event when not in combat and enemy is stealthed
	EvaEventSecondDamageFarFromFirstOwner = DwarvenUnitUnderAttackAgain ; Eva event to trigger when we are under attack far away from the first attack, while normal UnitUnderAttack is still timing out

	; Control settings for EvaEventSecondDamageFarFromFirstOwner
	EvaEventSecondDamageFarFromFirstScanRange = 600    ; What 'far' means. Note that each unit damaged blocks the second-damage callout within this range, not just the first damaged unit
	EvaEventSecondDamageFarFromFirstTimeoutMS = 31000  ; When the first damaged event plays, the unit must wait this long before trying second. Generally should >= timeout on event

    EvaEnemyObjectSightedEvent	= DwarvenGenericEnemyUnitSighted ; Normal response to enemy units
