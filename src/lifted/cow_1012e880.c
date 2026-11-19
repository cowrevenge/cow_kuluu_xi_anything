/* f_0x1012e880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012e880(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t32;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012e88bu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1012e88b;
    case 0x1012e89bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e89b;
    case 0x1012e8a1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8a1;
    case 0x1012e8abu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8ab;
    case 0x1012e8bcu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8bc;
    case 0x1012e8c4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8c4;
    case 0x1012e8cau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8ca;
    case 0x1012e8dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8db;
    case 0x1012e8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8e2;
    case 0x1012e8ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8ec;
    case 0x1012e8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e8fc;
    case 0x1012e905u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e905;
    case 0x1012e921u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e921;
    case 0x1012e92bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e92b;
    case 0x1012e939u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e939;
    case 0x1012e954u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e954;
    case 0x1012e965u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e965;
    case 0x1012e96cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e96c;
    case 0x1012e978u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e978;
    case 0x1012e984u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e984;
    case 0x1012e990u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e990;
    case 0x1012e99cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e99c;
    case 0x1012e9a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9a8;
    case 0x1012e9b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9b4;
    case 0x1012e9c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9c0;
    case 0x1012e9ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9cc;
    case 0x1012e9d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9d8;
    case 0x1012e9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9e4;
    case 0x1012e9edu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9ed;
    case 0x1012e9f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9f6;
    case 0x1012e9ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012e9ff;
    case 0x1012ea08u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea08;
    case 0x1012ea11u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea11;
    case 0x1012ea1au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea1a;
    case 0x1012ea23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea23;
    case 0x1012ea2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea2c;
    case 0x1012ea35u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea35;
    case 0x1012ea3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea3e;
    case 0x1012ea47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea47;
    case 0x1012ea50u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea50;
    case 0x1012ea59u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea59;
    case 0x1012ea6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea6c;
    case 0x1012ea93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012ea93;
    case 0x1012eaa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012eaa0;
    case 0x1012eabau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012eaba;
    case 0x1012eac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012eac4;
    default: break;
    }
#endif

    COW_AT(1012e880)
    if (rd32(self + 8u) == 0u)
    {
        ecx = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 8u);
    COW_AT(1012e88b)
        if (rd16(ecx + 0x4cu) == rd16(self + 0x1f0u))
        {
            edx = in_edx;
        }
        else
        {
            eax = (in_eax & 0xffff0000u) | rd16(self + 0x1f0u);
            edi = (in_edi & 0xffff0000u) | rd16(ecx + 0x4cu);
    COW_AT(1012e89b)
            if ((uint16_t)edi != 0xbu) goto L_1012e8c4;
    COW_AT(1012e8a1)
            if (rd16(self + 0x1b4u) != 0x10u) goto L_1012e8bc;
    COW_AT(1012e8ab)
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, eax, 0u);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
            edi = (edi & 0xffff0000u) | rd16(self + 0x1f0u);
L_1012e8db: ;
    COW_AT(1012e8db)
            wr16(self + 0x1f0u, (uint16_t)edi);
        }
    }
    COW_AT(1012e8e2)
    if ((int32_t)rd32(self + 0x1c0u) > 0)
    {
        eax = rd32(self + 0x1c0u);
    COW_AT(1012e8ec)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t9 = g->ecx;
        t10 = g->edx;
        d11 = cow_take_float(g);
        g->edx = t10;
        fpush(g, d11);
        t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
        t13 = g->edx;
        wr32(self + 0x1c0u, rd32(self + 0x1c0u) - t12);
        edx = t13;
    }
    COW_AT(1012e8fc)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1012e921;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(1012e905)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x1012fec0u), self, 0);
    t15 = g->edx;
    wr16(self + 0x1b4u, 0x18u);
    g->edx = t15;
    t16 = cow_call_regs(g, COW_IMG(0x1012f1b0u), t14, self, g->edx, 1, 0);
    t17 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t17;
    return t16;
L_1012e8bc: ;
    COW_AT(1012e8bc)
    loc_14 = 7u;
L_1012e8ca: ;
    COW_AT(1012e8ca)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, loc_14);
    t4 = g->edx;
    g->edx = t4;
    t5 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1011aaf0u), t5, 3, t3, 0u, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    goto L_1012e8db;
L_1012e8c4: ;
    COW_AT(1012e8c4)
    loc_14 = 0xbu;
    goto L_1012e8ca;
L_1012e921: ;
    COW_AT(1012e921)
    if (rd32(eax + 0x2c7d0u) == 0u)
    {
        ecx = rd32(eax + 0x2c7d0u);
    }
    else
    {
        ecx = rd32(eax + 0x2c7d0u);
    COW_AT(1012e92b)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t18 = cow_call_regs(g, COW_IMG(0x100f7fe0u), eax, g->ecx, g->edx, 1, 3, eax, in_edi, in_esi);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0xffffffffu)
        {
            ecx = t19;
            edx = t20;
            goto L_1012e954;
        }
        eax = t18;
        edx = t20;
L_1012e939: ;
    COW_AT(1012e939)
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10130080u), self, 1, eax);
        t21 = g->ecx;
        t22 = g->edx;
        g->ecx = t21;
        g->edx = t22;
        t23 = rd32(COW_IMG(0x104dfd98u));
        g->esp = sp0;
        t24 = cow_call_regs(g, COW_IMG(0x100f7fe0u), t23, g->ecx, g->edx, 1, 3, t23, in_edi, in_esi);
        t25 = g->ecx;
        t26 = g->edx;
        if (t24 != 0xffffffffu)
        {
            eax = t24;
            edx = t26;
            goto L_1012e939;
        }
        ecx = t25;
        edx = t26;
    }
L_1012e954: ;
    COW_AT(1012e954)
    if ((uint32_t)(int16_t)rd16(self + 0x1b4u) - 1u > 0x19u) goto L_1012ea6c;
    eax = (uint32_t)(int16_t)rd16(self + 0x1b4u) - 1u;
    COW_AT(1012e965)
    t27 = rd32(COW_IMG(0x1012eaccu) + eax * 4u);
    switch (t27 - RD)
    {
    case 0x1012e96cu: goto L_1012e96c;
    case 0x1012e978u: goto L_1012e978;
    case 0x1012e984u: goto L_1012e984;
    case 0x1012e990u: goto L_1012e990;
    case 0x1012e99cu: goto L_1012e99c;
    case 0x1012e9a8u: goto L_1012e9a8;
    case 0x1012e9b4u: goto L_1012e9b4;
    case 0x1012e9c0u: goto L_1012e9c0;
    case 0x1012e9ccu: goto L_1012e9cc;
    case 0x1012e9d8u: goto L_1012e9d8;
    case 0x1012e9e4u: goto L_1012e9e4;
    case 0x1012e9edu: goto L_1012e9ed;
    case 0x1012e9f6u: goto L_1012e9f6;
    case 0x1012e9ffu: goto L_1012e9ff;
    case 0x1012ea08u: goto L_1012ea08;
    case 0x1012ea11u: goto L_1012ea11;
    case 0x1012ea1au: goto L_1012ea1a;
    case 0x1012ea23u: goto L_1012ea23;
    case 0x1012ea2cu: goto L_1012ea2c;
    case 0x1012ea35u: goto L_1012ea35;
    case 0x1012ea3eu: goto L_1012ea3e;
    case 0x1012ea47u: goto L_1012ea47;
    case 0x1012ea50u: goto L_1012ea50;
    case 0x1012ea59u: goto L_1012ea59;
    case 0x1012ea6cu: goto L_1012ea6c;
    default: rt_fatal(g, COW_IMG(0x1012e965u), "switch");
    }
    return 0;
L_1012e96c: ;
    COW_AT(1012e96c)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f410u), self, 0);
L_1012ea6c: ;
    COW_AT(1012ea6c)
    t28 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0xfbffffffu;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u, t28);
    if ((int32_t)rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu) < 0)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
        edx = t28;
    COW_AT(1012ea93)
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t29 = cow_stdcall(g, COW_IMG(0x10130290u), 1, eax);
        t30 = g->ecx;
        t31 = g->edx;
        cow_thiscall(g, COW_IMG(0x10037c50u), t30, 0);
    }
    COW_AT(1012eaa0)
    t32 = rd32(COW_IMG(0x104dfd98u));
    wr32(t32 + 0x2c7ccu, 0u);
    if (rd32(self + 0x1c0u) != 0u)
    {
        eax = rd32(self + 0x1c0u);
        edx = t32;
    }
    else
    {
        eax = rd32(self + 0x1c0u);
        edx = t32;
    COW_AT(1012eaba)
        wr32(self + 0x1c0u, 0xffffffffu);
    }
    COW_AT(1012eac4)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1012e978: ;
    COW_AT(1012e978)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f450u), self, 0);
    goto L_1012ea6c;
L_1012e984: ;
    COW_AT(1012e984)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f4b0u), self, 0);
    goto L_1012ea6c;
L_1012e990: ;
    COW_AT(1012e990)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f500u), self, 0);
    goto L_1012ea6c;
L_1012e99c: ;
    COW_AT(1012e99c)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f570u), self, 0);
    goto L_1012ea6c;
L_1012e9a8: ;
    COW_AT(1012e9a8)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012f620u), self, edx, 0);
    goto L_1012ea6c;
L_1012e9b4: ;
    COW_AT(1012e9b4)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f790u), self, 0);
    goto L_1012ea6c;
L_1012e9c0: ;
    COW_AT(1012e9c0)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012f7e0u), self, edx, 0);
    goto L_1012ea6c;
L_1012e9cc: ;
    COW_AT(1012e9cc)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f8c0u), self, 0);
    goto L_1012ea6c;
L_1012e9d8: ;
    COW_AT(1012e9d8)
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1012f8e0u), eax, self, g->edx, 1, 0);
    goto L_1012ea6c;
L_1012e9e4: ;
    COW_AT(1012e9e4)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f980u), self, 0);
    goto L_1012ea6c;
L_1012e9ed: ;
    COW_AT(1012e9ed)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fa10u), self, edx, 0);
    goto L_1012ea6c;
L_1012e9f6: ;
    COW_AT(1012e9f6)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012faa0u), self, 0);
    goto L_1012ea6c;
L_1012e9ff: ;
    COW_AT(1012e9ff)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fb30u), self, edx, 0);
    goto L_1012ea6c;
L_1012ea08: ;
    COW_AT(1012ea08)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fb90u), self, edx, 0);
    goto L_1012ea6c;
L_1012ea11: ;
    COW_AT(1012ea11)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fc80u), self, edx, 0);
    goto L_1012ea6c;
L_1012ea1a: ;
    COW_AT(1012ea1a)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012fd00u), self, 0);
    goto L_1012ea6c;
L_1012ea23: ;
    COW_AT(1012ea23)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fd90u), self, edx, 0);
    goto L_1012ea6c;
L_1012ea2c: ;
    COW_AT(1012ea2c)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012fe20u), self, 0);
    goto L_1012ea6c;
L_1012ea35: ;
    COW_AT(1012ea35)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012fec0u), self, 0);
    goto L_1012ea6c;
L_1012ea3e: ;
    COW_AT(1012ea3e)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012ff30u), self, 0);
    goto L_1012ea6c;
L_1012ea47: ;
    COW_AT(1012ea47)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10130000u), self, 0);
    goto L_1012ea6c;
L_1012ea50: ;
    COW_AT(1012ea50)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012fe80u), self, 0);
    goto L_1012ea6c;
L_1012ea59: ;
    COW_AT(1012ea59)
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100f7fa0u), 1, 0xfu);
    wr16(self + 0x1b4u, 0x19u);
    goto L_1012ea6c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012e880(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012e88bu:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1012e89bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e8a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e8abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e8bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e8c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e8cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1012e8dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e8e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e8ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e8fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e905u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e921u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e92bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e939u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e954u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e965u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e96cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e978u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e984u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e990u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e99cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012e9ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012ea93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012eaa0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012eabau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1012eac4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e880(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012e880(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
