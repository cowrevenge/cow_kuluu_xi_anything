/* f_0x102d4535 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_102d4535(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 216u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d454fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xa4u); goto E_102d454f;
    case 0x102d4559u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xa4u); goto E_102d4559;
    case 0x102d4562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d4562;
    case 0x102d456cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d456c;
    case 0x102d457du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d457d;
    case 0x102d4587u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d4587;
    case 0x102d4591u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d4591;
    case 0x102d4599u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d4599;
    case 0x102d45a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d45a1;
    case 0x102d45b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d45b0;
    case 0x102d45b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d45b7;
    case 0x102d45c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d45c3;
    case 0x102d45e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d45e4;
    case 0x102d45ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d45eb;
    case 0x102d45fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d45fa;
    case 0x102d461bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d461b;
    case 0x102d4625u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d4625;
    case 0x102d4632u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d4632;
    case 0x102d4672u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d4672;
    case 0x102d467au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d467a;
    case 0x102d467fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xacu); in_ebx = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xacu); g->esi = rd32(sp0 - 0xa4u); goto E_102d467f;
    case 0x102d4699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102d4699;
    case 0x102d469du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102d469d;
    case 0x102d46c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102d46c5;
    case 0x102d46c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_4 = rd32(sp0 - 4u); goto E_102d46c7;
    case 0x102d46c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_4 = rd32(sp0 - 4u); goto E_102d46c9;
    default: break;
    }
#endif

    COW_AT(102d4535)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xa4u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xa4u;
    t1 = cow_thiscall(g, COW_IMG(0x102e0f8cu), sp0 - 0x34u, 0);
    t2 = g->edx;
    if (arg1 != 0u)
    {
        eax = t1;
        edx = t2;
    COW_AT(102d4559)
        wr32(sp0 - 0xa8u, in_ebx);
        wr32(sp0 - 0xacu, in_edi);
        if (arg4 != 0u)
        {
    COW_AT(102d456c)
            if ((uint16_t)arg7 == 5u) goto L_102d4672;
    COW_AT(102d457d)
            if (arg8 != 0u) goto L_102d4672;
    COW_AT(102d4587)
            if (arg2 == arg5) goto L_102d45b0;
    COW_AT(102d4591)
            if (arg2 == 0u) goto L_102d4672;
    COW_AT(102d4599)
            if (arg5 == 0u) goto L_102d4672;
    COW_AT(102d45a1)
            esi = arg2;
            edi = arg5;
            ecx = 0x100u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
            if (!zf) goto L_102d4672;
L_102d45b0: ;
    COW_AT(102d45b0)
            if (arg3 == 0u)
            {
    COW_AT(102d45c3)
                wr32(sp0 - 0xb0u, sp0 - 0x54u);
                wr32(sp0 - 0xb4u, arg1);
                g->esp = sp0 - 0xacu;
                cow_thiscall(g, rd32(rd32(arg1) + 0x20u), rd32(arg1), 2, arg1, sp0 - 0x54u);
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x10u, 0u);
                t3 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0xcu, t3);
                t4 = rd32(sp0 - 0x38u);
                wr32(sp0 - 8u, t4);
                edx = t3;
                loc_14 = 0u;
                loc_10 = 0u;
                loc_c = t3;
                loc_8 = t4;
            }
            else
            {
    COW_AT(102d45b7)
                esi = arg3;
                edi = sp0 - 0x14u;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                edx = rd32(sp0 - 0xcu);
                loc_14 = rd32(sp0 - 0x14u);
                loc_10 = rd32(sp0 - 0x10u);
                loc_c = rd32(sp0 - 0xcu);
                loc_8 = rd32(sp0 - 8u);
            }
    COW_AT(102d45e4)
            if (arg6 == 0u)
            {
    COW_AT(102d45fa)
                wr32(sp0 - 0xb0u, sp0 - 0x54u);
                wr32(sp0 - 0xb4u, arg4);
                g->esp = sp0 - 0xacu;
                cow_thiscall(g, rd32(rd32(arg4) + 0x20u), sp0 - 0x54u, 2, arg4, sp0 - 0x54u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x20u, 0u);
                t5 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0x1cu, t5);
                t6 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x18u, t6);
                eax = t5;
                ecx = t6;
                edx = rd32(sp0 - 0xcu);
                loc_14 = rd32(sp0 - 0x14u);
                loc_10 = rd32(sp0 - 0x10u);
                loc_8 = rd32(sp0 - 8u);
                loc_24 = 0u;
                loc_20 = 0u;
            }
            else
            {
    COW_AT(102d45eb)
                esi = arg6;
                edi = sp0 - 0x24u;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                eax = rd32(sp0 - 0x1cu);
                ecx = rd32(sp0 - 0x18u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_20 = rd32(sp0 - 0x20u);
            }
    COW_AT(102d461b)
            if (edx - loc_14 != eax - loc_24)
            {
                edx = edx - loc_14;
                goto L_102d4672;
            }
            edx = edx - loc_14;
    COW_AT(102d4625)
            if (loc_8 - loc_10 != ecx - loc_20) goto L_102d4672;
    COW_AT(102d4632)
            wr32(sp0 - 0xb0u, sp0 + 0x10u);
            wr32(sp0 - 0xb4u, arg4);
            g->eax = rd32(arg4);
            g->edx = edx;
            t7 = rd32(arg4);
            g->esp = sp0 - 0xacu;
            t8 = cow_thiscall(g, rd32(t7 + 0xcu), sp0 + 0x10u, 2, arg4, sp0 + 0x10u);
            t9 = g->ecx;
            t10 = g->edx;
            wr32(sp0 - 0xb0u, 1u);
            cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, t9, t10, 1, 1, 1u);
            wr32(sp0 - 0xb0u, sp0 - 0x14u);
            wr32(sp0 - 0xb4u, arg1);
            wr32(sp0 - 0xb8u, 1u);
            wr32(sp0 - 0xbcu, sp0 - 0x24u);
            wr32(sp0 - 0xc0u, arg4);
            wr32(sp0 - 0xc4u, arg4);
            g->eax = arg4;
            g->edx = sp0 - 0x24u;
            t11 = rd32(arg4);
            t12 = cow_thiscall(g, rd32(t11 + 0x70u), t11, 6, arg4, arg4, sp0 - 0x24u, 1u, arg1, sp0 - 0x14u);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 - 0xb0u, 0u);
            cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, t13, t14, 1, 1, 0u);
            t15 = g->edx;
            wr32(sp0 - 0xb0u, arg4);
            g->eax = arg4;
            g->edx = t15;
            t16 = cow_thiscall(g, rd32(rd32(arg4) + 8u), rd32(arg4), 1, arg4);
            t17 = g->edx;
            if ((int32_t)t12 >= 0)
            {
                eax = t16;
                edx = t17;
                goto L_102d46c5;
            }
            edx = t17;
L_102d4672: ;
    COW_AT(102d4672)
            if (arg1 != arg4)
            {
                eax = 1u;
            }
            else
            {
    COW_AT(102d467a)
                eax = 0x10001u;
            }
    COW_AT(102d467f)
            wr32(sp0 - 0xb0u, eax);
            wr32(sp0 - 0xb4u, 0u);
            wr32(sp0 - 0xb8u, arg6);
            wr32(sp0 - 0xbcu, arg5);
            wr32(sp0 - 0xc0u, arg4);
            wr32(sp0 - 0xc4u, sp0 - 0xa0u);
            g->eax = sp0 - 0xa0u;
            g->esp = sp0 - 0xacu;
            t18 = cow_fastcall(g, COW_IMG(0x102e1026u), sp0 - 0x34u, edx, 6, sp0 - 0xa0u, arg4, arg5, arg6, 0u, eax);
            t19 = g->ecx;
            t20 = g->edx;
            if ((int32_t)t18 >= 0)
            {
                ecx = t19;
                edx = t20;
                goto L_102d469d;
            }
            eax = t18;
            edx = t20;
L_102d4699: ;
    COW_AT(102d4699)
            esi = eax;
            loc_4 = rd32(sp0 - 4u);
            loc_a4 = rd32(sp0 - 0xa4u);
            loc_a8 = rd32(sp0 - 0xa8u);
            loc_ac = rd32(sp0 - 0xacu);
        }
        else
        {
    COW_AT(102d4562)
            esi = 0x8876086cu;
            loc_4 = in_ebp;
            loc_a4 = in_esi;
            loc_a8 = in_ebx;
            loc_ac = in_edi;
        }
L_102d46c7: ;
    COW_AT(102d46c7)
        ebx = loc_a8;
        edi = loc_ac;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(102d454f)
        ebx = in_ebx;
        esi = 0x8876086cu;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_a4 = in_esi;
    }
    COW_AT(102d46c9)
    g->esp = sp0 - 0xa4u;
    cow_fastcall(g, COW_IMG(0x102e1021u), sp0 - 0x34u, edx, 0);
    t26 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = t26;
    return esi;
L_102d469d: ;
    COW_AT(102d469d)
    wr32(sp0 - 0xb0u, arg8);
    wr32(sp0 - 0xb4u, arg7);
    wr32(sp0 - 0xb8u, sp0 - 0x78u);
    wr32(sp0 - 0xbcu, arg5);
    t21 = rd32(sp0 - 0x98u);
    wr32(sp0 - 0xc0u, t21);
    t22 = rd32(sp0 - 0x9cu);
    wr32(sp0 - 0xc4u, t22);
    t23 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0xc8u, t23);
    wr32(sp0 - 0xccu, arg3);
    wr32(sp0 - 0xd0u, arg2);
    wr32(sp0 - 0xd4u, arg1);
    g->eax = sp0 - 0x78u;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t24 = cow_stdcall(g, COW_IMG(0x102d2888u), 10, arg1, arg2, arg3, t23, t22, t21, arg5, sp0 - 0x78u, arg7, arg8);
    t25 = g->edx;
    if ((int32_t)t24 < 0)
    {
        eax = t24;
        edx = t25;
        goto L_102d4699;
    }
    eax = t24;
    edx = t25;
L_102d46c5: ;
    COW_AT(102d46c5)
    esi = 0u;
    loc_4 = rd32(sp0 - 4u);
    loc_a4 = rd32(sp0 - 0xa4u);
    loc_a8 = rd32(sp0 - 0xa8u);
    loc_ac = rd32(sp0 - 0xacu);
    goto L_102d46c7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d4535(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d454fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d4559u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d4562u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d456cu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d457du:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d4587u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d4591u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        g->esi = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d4599u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        g->esi = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d45a1u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        g->esi = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102d45b0u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d45b7u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102d45c3u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d45e4u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d45ebu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        g->esi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102d45fau:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d461bu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d4625u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d4632u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d4672u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d467au:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d467fu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xacu);
        in_ebx = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebx = arg4;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d4699u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d469du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->ebp = sp0 - 0x5cu;
        wr32(sp0 - 0xc4u, sp0 - 0xa0u);
        (void)sp0;
        return 1;
    }
    case 0x102d46c5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d46c7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xacu;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102d46c9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d4535(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d4535(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
