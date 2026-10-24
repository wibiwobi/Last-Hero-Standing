// Hero
// Five Monsters
    // Monster's move is random (attack, heal, dodge, special)
        // 1st stage - Warrior Skeleton
        // 2nd stage - Swedish Viking
        // 3rd stage - Elite Samurai
        // 4th stage - Giant Zombie
        // 5th stage - Undead Knight

// Goal: Defeat all the monsters
// Two scenarios
    // Hero defeats all the monsters
    // He dies, he goes back to the 1st stage

// MOVES
    // Hero -> HP = 100 -> fully healed every next stage
        // attack 
           // sword slash - 30 initially, chance to crit (10%) x 2
        // heal 
            // 10 initally
        // dodge
            // (15%) to fail plus heal + 5 if successfull
    // Monster
        // 1st stage - Warrior Skeleton - > HP 150
            // attack 
                // bone slash - 30 initially, chance to crit (5%) x 1.5
            // heal 
                // 10
            // dodge
                // chance to fail 30%
            // loot - pick one (+ 30 HP, ATTACK 50)
                // + 2 crit, - 2 percent chance
                // 100 health
                // - 5 % dodge to fail
                // heal + 10


        // 2nd stage - Swedish Viking  - > HP 250
            // attack 
                // axe throw 60, chance to fail 30%
            // heal 
                // 15
            // dodge
                // chance to fail 25%
            // loot - pick one (+ 60 HP, ATTACK 50)
                // + 0.5 crit, - 0.5% chance
                // 100 health
                // - 3 % dodge to fail

        // 3rd stage - Elite Samurai  - > HP 300
        // attack 
                // fast slash 80, chance to fail 25%
            // heal 
                // 5
            // dodge
                // chance to fail 20%
            // loot - pick one // loot - pick one (+ 100 HP, ATTACK 50)
                // + 0.5 crit, - 2% chance
                // 70 health
                // - 2 % dodge to fail
        // 4th stage - Giant Zombie - 350
        // attack 
                // 90, chance to fail 25%
            // heal 
                // 20
            // dodge
                // chance to fail 50%
            // loot - pick one
                // + 1 crit, - 0.5% chance
                // + 200 health
                // 0% chance failure rate of dodging + 20 heal every dodge
        // 5th stage - Undead Knight - 500
        // attack 
                // 150, chance to crit 60 percent, * 1.5 
            // heal 
                // fully healed - 20 percent chance, if not heal 50
            // dodge
                // chance to fail 5% 


/*
    VARIABLES
        hero
            heroHealth
            attackDamage
            criticalChance 
            criticalDamage
            heal
            dodgeFailureRate
            
        warrior skeleton
            skeletonHealth
            skeletonDamage
            criticalChance 
            criticalDamage
            skeletonHeal
            skeletonDodgeFailureRate

            loot 
                heroHealth += 30
                attackDamage += 50

                pick one
                    1. chance criticalDamage += 2, criticalChance -= 2
                    2. heroHealth += 100
                    3. dodgeFailureRate -= 5 
                    4. heal += 10

        swedish viking
            vikingHealth
            vikingDamage
            vikingHeal
            vikingDodgeFailureRate

        swedish samurai
            samuraiHealth
            samuraiDamage
            samuraiHeal
            samuraiDodgeFailureRate

        swedish zombie
            zombieHealth
            zombieDamage
            zombieHeal
            zombieDodgeFailureRate

        swedish knight
            knightHealth
            knightDamage
            knightHeal
            knightDodgeFailureRate

SCREEN - In battle
                         HERO          MONSTER - (Monster Name)
HP                        100                  400
ATTACK                    100                  150
HEAL			   50                  10	
DODGE FAILURE RATE         15                   5 


1. ATTACK 
2. HEAL
3. DODGE

Move: 





SCREEN - Loot

Rewards: 

Next monster stats
                        MONSTER - (Monster Name)
HP                               400
ATTACK                           150
HEAL		                 10	
DODGE FAILURE RATE               5 


LOOT

1. 
2. 
3.

Input: 






FLOW







*/
