/* f_0x101dd330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101dd330(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 164u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dd344u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x90u); goto E_101dd344;
    case 0x101dd34bu: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x90u); goto E_101dd34b;
    case 0x101dd352u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x90u); goto E_101dd352;
    case 0x101dd364u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd364;
    case 0x101dd385u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x90u); goto E_101dd385;
    case 0x101dd389u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x90u); goto E_101dd389;
    case 0x101dd398u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd398;
    case 0x101dd3a6u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd3a6;
    case 0x101dd3b3u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd3b3;
    case 0x101dd3c5u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd3c5;
    case 0x101dd3cfu: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd3cf;
    case 0x101dd3e9u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x90u); goto E_101dd3e9;
    case 0x101dd3edu: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x90u); goto E_101dd3ed;
    case 0x101dd3fcu: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd3fc;
    case 0x101dd409u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd409;
    case 0x101dd41bu: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd41b;
    case 0x101dd425u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd425;
    case 0x101dd442u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_101dd442;
    case 0x101dd45bu: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_101dd45b;
    case 0x101dd460u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_101dd460;
    case 0x101dd46eu: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_101dd46e;
    case 0x101dd474u: eax = g->eax; edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_101dd474;
    case 0x101dd482u: eax = g->eax; edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_101dd482;
    default: break;
    }
#endif

    COW_AT(101dd330)
    wr32(sp0 - 0x8cu, in_ebx);
    wr32(sp0 - 0x90u, in_esi);
    if (rd32(self + 0x378u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
    COW_AT(101dd344)
        wr32(sp0 - 0x94u, 1u);
        g->edx = in_edx;
        g->esp = sp0 - 0x90u;
        t1 = cow_call_regs(g, COW_IMG(0x101dd1c0u), in_eax, self, g->edx, 0, 1, 1u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(101dd34b)
    if (rd8(self + 0x16u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x16u);
    COW_AT(101dd385)
        if ((uint8_t)eax != 2u)
        {
    COW_AT(101dd3e9)
            if ((uint8_t)eax != 3u)
            {
                loc_8c = in_ebx;
                loc_90 = in_esi;
            }
            else
            {
    COW_AT(101dd3ed)
                wr32(sp0 - 0x94u, 6u);
                wr32(sp0 - 0x98u, 3u);
                g->ebx = 0u;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x90u;
                t18 = cow_thiscall(g, COW_IMG(0x101dd520u), self, 2, 3u, 6u);
                t19 = g->edx;
                if ((uint8_t)t18 == 0u)
                {
                    eax = t18;
                    edx = t19;
                    loc_8c = in_ebx;
                    loc_90 = in_esi;
                }
                else
                {
                    eax = t18;
                    edx = t19;
    COW_AT(101dd3fc)
                    wr32(sp0 - 0x94u, 3u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x90u;
                    t20 = cow_thiscall(g, COW_IMG(0x101dd4e0u), self, 1, 3u);
                    t21 = g->edx;
                    if ((uint8_t)t20 != 0u)
                    {
    COW_AT(101dd41b)
                        wr8(self + 0x2fcu, 0u);
                        wr8(sp0 - 0x7cu, 0u);
                    }
                    else
                    {
                        eax = t20;
                        edx = t21;
    COW_AT(101dd409)
                        wr32(sp0 - 0x94u, 6u);
                        wr32(sp0 - 0x98u, 3u);
                        wr32(sp0 - 0x9cu, sp0 - 0x7cu);
                        g->esp = sp0 - 0x90u;
                        cow_thiscall(g, COW_IMG(0x101dd650u), self, 3, sp0 - 0x7cu, 3u, 6u);
                    }
    COW_AT(101dd425)
                    wr32(sp0 - 0x94u, 1u);
                    wr32(sp0 - 0x98u, sp0 - 0x88u);
                    wr32(sp0 - 0x9cu, sp0 - 0x84u);
                    wr32(sp0 - 0xa0u, sp0 - 0x80u);
                    g->eax = sp0 - 0x84u;
                    g->edx = sp0 - 0x88u;
                    g->esp = sp0 - 0x90u;
                    t22 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 0x80u, 4, sp0 - 0x80u, sp0 - 0x84u, sp0 - 0x88u, 1u);
                    t23 = g->edx;
                    if ((uint8_t)t22 == 0u)
                    {
                        eax = t22;
                        edx = t23;
                        loc_8c = rd32(sp0 - 0x8cu);
                        loc_90 = rd32(sp0 - 0x90u);
                    }
                    else
                    {
    COW_AT(101dd442)
                        wr32(sp0 - 0x94u, sp0 - 0x7cu);
                        t24 = rd32(sp0 - 0x84u);
                        wr32(sp0 - 0x98u, t24);
                        t25 = rd32(sp0 - 0x88u);
                        wr32(sp0 - 0x9cu, t25);
                        wr32(sp0 - 0xa0u, 1u);
                        g->edx = sp0 - 0x7cu;
                        g->esp = sp0 - 0x90u;
                        t26 = cow_call_regs(g, COW_IMG(0x100eace0u), t24, g->ecx, g->edx, 1, 4, 1u, t25, t24, sp0 - 0x7cu);
                        t27 = g->edx;
                        eax = t26;
                        edx = t27;
                        loc_8c = rd32(sp0 - 0x8cu);
                        loc_90 = rd32(sp0 - 0x90u);
                    }
                }
            }
        }
        else
        {
    COW_AT(101dd389)
            wr32(sp0 - 0x94u, 5u);
            wr32(sp0 - 0x98u, 2u);
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x90u;
            t9 = cow_thiscall(g, COW_IMG(0x101dd520u), self, 2, 2u, 5u);
            t10 = g->edx;
            if ((uint8_t)t9 != 0u)
            {
                eax = t9;
                edx = t10;
                goto L_101dd3a6;
            }
            eax = t9;
            edx = t10;
    COW_AT(101dd398)
            if (rd8(self + 0x17u) == rd8(self + 0x18u))
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
                edx = (edx & 0xffffff00u) | rd8(self + 0x17u);
                loc_8c = rd32(sp0 - 0x8cu);
                loc_90 = rd32(sp0 - 0x90u);
                goto L_101dd45b;
            }
            eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
            edx = (edx & 0xffffff00u) | rd8(self + 0x17u);
L_101dd3a6: ;
    COW_AT(101dd3a6)
            wr32(sp0 - 0x94u, 2u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x90u;
            t11 = cow_thiscall(g, COW_IMG(0x101dd4e0u), self, 1, 2u);
            t12 = g->edx;
            if ((uint8_t)t11 != 0u)
            {
                eax = t11;
    COW_AT(101dd3c5)
                wr8(self + 0x281u, 0u);
                wr8(sp0 - 0x7cu, 0u);
            }
            else
            {
                edx = t12;
                pf = PARITY((uint8_t)t11);
                zf = (uint8_t)t11 == 0u;
                sf = (int8_t)t11 < 0;
    COW_AT(101dd3b3)
                wr32(sp0 - 0x94u, 5u);
                wr32(sp0 - 0x98u, 2u);
                wr32(sp0 - 0x9cu, sp0 - 0x7cu);
                g->cf = 0u;
                g->pf = pf;
                g->af = 0u;
                g->zf = zf;
                g->sf = sf;
                g->of = 0u;
                g->eax = sp0 - 0x7cu;
                g->esp = sp0 - 0x90u;
                t13 = cow_thiscall(g, COW_IMG(0x101dd5a0u), self, 3, sp0 - 0x7cu, 2u, 5u);
                eax = t13;
            }
    COW_AT(101dd3cf)
            wr32(sp0 - 0x94u, sp0 - 0x7cu);
            t14 = (uint32_t)(int8_t)rd8(self + 0x17u);
            wr32(sp0 - 0x98u, t14);
            g->eax = eax;
            g->edx = t14;
            g->esp = sp0 - 0x90u;
            t15 = cow_cdecl(g, COW_IMG(0x100e5980u), 2, t14, sp0 - 0x7cu);
            t16 = g->edx;
            t17 = rd8(self + 0x17u);
            wr8(self + 0x18u, (uint8_t)t17);
            eax = (t15 & 0xffffff00u) | t17;
            edx = t16;
            loc_8c = rd32(sp0 - 0x8cu);
            loc_90 = rd32(sp0 - 0x90u);
        }
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x16u);
    COW_AT(101dd352)
        wr32(sp0 - 0x94u, 4u);
        wr32(sp0 - 0x98u, 0u);
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        t3 = cow_thiscall(g, COW_IMG(0x101dd520u), self, 2, 0u, 4u);
        t4 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            eax = t3;
            edx = t4;
            loc_8c = in_ebx;
            loc_90 = in_esi;
        }
        else
        {
            edx = t4;
            pf = PARITY((uint8_t)t3);
            zf = (uint8_t)t3 == 0u;
            sf = (int8_t)t3 < 0;
    COW_AT(101dd364)
            wr32(sp0 - 0x94u, 4u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x9cu, sp0 - 0x7cu);
            g->cf = 0u;
            g->pf = pf;
            g->af = 0u;
            g->zf = zf;
            g->sf = sf;
            g->of = 0u;
            g->eax = sp0 - 0x7cu;
            g->edx = edx;
            g->esp = sp0 - 0x90u;
            t5 = cow_thiscall(g, COW_IMG(0x101dd5a0u), self, 3, sp0 - 0x7cu, 0u, 4u);
            t6 = g->edx;
            wr32(sp0 - 0x94u, sp0 - 0x7cu);
            g->edx = t6;
            t7 = cow_cdecl(g, COW_IMG(0x100e55b0u), 1, sp0 - 0x7cu);
            t8 = g->edx;
            eax = t7;
            edx = t8;
            loc_8c = rd32(sp0 - 0x8cu);
            loc_90 = rd32(sp0 - 0x90u);
        }
    }
L_101dd45b: ;
    COW_AT(101dd45b)
    if (rd8(self + 0x16u) == 0u)
    {
    COW_AT(101dd460)
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        t28 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
        t29 = g->edx;
        eax = t28;
        edx = t29;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
    }
    COW_AT(101dd46e)
    if (rd8(self + 0x16u) != 1u)
    {
    COW_AT(101dd474)
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        t30 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
    }
    COW_AT(101dd482)
    g->ebx = loc_8c;
    g->esi = loc_90;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dd330(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dd344u:
    {
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101dd34bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd352u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd364u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x101dd385u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd389u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd398u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd3a6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd3b3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x101dd3c5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd3cfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd3e9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd3edu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd3fcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd409u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd41bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd425u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd442u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0x9cu, sp0 - 0x84u);
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x101dd45bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd460u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd46eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd474u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dd482u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd330(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dd330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
