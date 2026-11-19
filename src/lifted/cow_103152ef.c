/* f_0x103152ef - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103152ef(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10315316u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); goto E_10315316;
    case 0x1031531du: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1031531d;
    case 0x10315325u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10315325;
    case 0x1031532cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1031532c;
    case 0x10315330u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10315330;
    case 0x1031533bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1031533b;
    case 0x10315351u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10315351;
    case 0x10315374u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10315374;
    case 0x1031537eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1031537e;
    case 0x10315381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10315381;
    case 0x1031538bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1031538b;
    case 0x10315392u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10315392;
    case 0x1031539au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1031539a;
    case 0x103153a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_103153a4;
    case 0x103153c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_103153c1;
    case 0x103153c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_103153c8;
    case 0x103153cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_103153cf;
    case 0x103153d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_103153d9;
    case 0x103153e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_103153e2;
    case 0x103153edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_103153ed;
    case 0x103153f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_103153f4;
    case 0x10315400u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10315400;
    case 0x1031542eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1031542e;
    case 0x1031543au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1031543a;
    case 0x1031543cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1031543c;
    case 0x1031544bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1031544b;
    case 0x1031545fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031545f;
    case 0x10315466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10315466;
    case 0x10315472u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10315472;
    case 0x1031547bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); goto E_1031547b;
    case 0x10315480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10315480;
    case 0x1031548au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1031548a;
    case 0x1031548du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); goto E_1031548d;
    default: break;
    }
#endif

    COW_AT(103152ef)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, 0x19u);
    g->esp = sp0 - 0x20u;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x19u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x30u, t4);
    g->edx = t3;
    g->esp = sp0 - 0x2cu;
    t5 = cow_cdecl(g, COW_IMG(0x1031549cu), 1, t4);
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x109f9440u));
    wr32(sp0 + 4u, t5);
    if (t5 != t7)
    {
        eax = t5;
        edx = t6;
        ebx = t5;
        goto L_1031531d;
    }
    eax = t5;
    ecx = 0x19u;
    edx = t6;
    loc_4 = in_ebp;
    loc_20 = in_ebx;
    loc_24 = in_esi;
    loc_28 = in_edi;
L_10315316: ;
    COW_AT(10315316)
    esi = 0u;
L_1031548d: ;
    COW_AT(1031548d)
    wr32(sp0 - 0x2cu, 0x19u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x19u, loc_28, loc_24);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 4u);
    return esi;
L_1031531d: ;
    COW_AT(1031531d)
    if (ebx == 0u)
    {
        ecx = 0x19u;
        loc_4 = in_ebp;
        loc_20 = in_ebx;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_1031547b;
    }
    COW_AT(10315325)
    eax = COW_IMG(0x103d0258u);
    edx = 0u;
L_1031532c: ;
    COW_AT(1031532c)
    if (rd32(eax) == ebx) goto L_103153a4;
    COW_AT(10315330)
    if (eax + 0x30u < COW_IMG(0x103d0348u))
    {
        eax = eax + 0x30u;
        edx = edx + 1u;
        goto L_1031532c;
    }
    edx = edx + 1u;
    COW_AT(1031533b)
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    wr32(sp0 - 0x30u, ebx);
    g->eax = sp0 - 0x1cu;
    g->ecx = 0x19u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t8 = cow_stdcall(g, rd32(COW_IMG(0x10329274u)), 2, ebx, sp0 - 0x1cu);   /* kernel32.dll!GetCPInfo */
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    if (t8 != 1u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_10315472;
    }
    edx = t10;
    COW_AT(10315351)
    wr32(sp0 - 0x2cu, 0x40u);
    wr32(COW_IMG(0x109f9664u), 0u);
    t11 = rd32(sp0 - 0x1cu);
    edi = COW_IMG(0x109f9560u);
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(COW_IMG(0x109f9440u), ebx);
    if (t11 <= 1u)
    {
    COW_AT(1031545f)
        wr32(COW_IMG(0x109f945cu), 0u);
    }
    else
    {
    COW_AT(10315374)
        if (rd8(sp0 - 0x16u) != 0u)
        {
    COW_AT(1031537e)
            ecx = sp0 - 0x15u;
L_10315381: ;
    COW_AT(10315381)
            if (rd8(ecx) == 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(ecx);
                goto L_1031543a;
            }
            edx = (edx & 0xffffff00u) | rd8(ecx);
    COW_AT(1031538b)
            eax = rd8(ecx - 1u);
            edx = (uint8_t)edx;
L_10315392: ;
    COW_AT(10315392)
            if (eax > edx) goto L_1031542e;
    COW_AT(1031539a)
            wr8(COW_IMG(0x109f9561u) + eax, rd8(COW_IMG(0x109f9561u) + eax) | 4u);
            eax = eax + 1u;
            goto L_10315392;
        }
L_1031543a: ;
    COW_AT(1031543a)
        eax = 1u;
L_1031543c: ;
    COW_AT(1031543c)
        wr8(COW_IMG(0x109f9561u) + eax, rd8(COW_IMG(0x109f9561u) + eax) | 8u);
        if (eax + 1u < 0xffu)
        {
            eax = eax + 1u;
            goto L_1031543c;
        }
        eax = eax + 1u;
    COW_AT(1031544b)
        wr32(sp0 - 0x2cu, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t12 = cow_cdecl(g, COW_IMG(0x103154e6u), 1, ebx);
        t13 = g->edx;
        t14 = rd32(sp0 - 0x2cu);
        wr32(COW_IMG(0x109f9664u), t12);
        wr32(COW_IMG(0x109f945cu), 1u);
        ecx = t14;
        edx = t13;
    }
    COW_AT(10315466)
    edi = COW_IMG(0x109f9450u);
    eax = 0u;
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
L_10315480: ;
    COW_AT(10315480)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t22 = cow_fastcall(g, COW_IMG(0x10315542u), ecx, edx, 0);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    loc_4 = rd32(sp0 - 4u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    goto L_10315316;
L_103153a4: ;
    COW_AT(103153a4)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x2cu, 0x40u);
    edi = COW_IMG(0x109f9560u);
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    ebx = COW_IMG(0x103d0268u) + edx * 0x30u;
    esi = edx * 0x30u;
    loc_8 = 0u;
L_103153c1: ;
    COW_AT(103153c1)
    if (rd8(ebx) == 0u)
    {
        ecx = ebx;
        goto L_103153f4;
    }
    ecx = ebx;
L_103153c8: ;
    COW_AT(103153c8)
    if (rd8(ecx + 1u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        goto L_103153f4;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    COW_AT(103153cf)
    if (rd8(ecx) <= (uint8_t)edx)
    {
        eax = rd8(ecx);
        edi = (uint8_t)edx;
    COW_AT(103153d9)
        edx = (loc_8 & 0xffffff00u) | rd8(COW_IMG(0x103d0250u) + loc_8);
L_103153e2: ;
    COW_AT(103153e2)
        wr8(COW_IMG(0x109f9561u) + eax, (uint8_t)(rd8(COW_IMG(0x109f9561u) + eax) | edx));
        if (eax + 1u <= edi)
        {
            eax = eax + 1u;
            goto L_103153e2;
        }
    }
    COW_AT(103153ed)
    if (rd8(ecx + 2u) != 0u)
    {
        ecx = ecx + 2u;
        goto L_103153c8;
    }
    ecx = ecx + 2u;
L_103153f4: ;
    COW_AT(103153f4)
    wr32(sp0 - 8u, loc_8 + 1u);
    if (loc_8 + 1u < 4u)
    {
        ebx = ebx + 8u;
        loc_8 = loc_8 + 1u;
        goto L_103153c1;
    }
    COW_AT(10315400)
    t15 = rd32(sp0 + 4u);
    wr32(COW_IMG(0x109f945cu), 1u);
    wr32(sp0 - 0x2cu, t15);
    wr32(COW_IMG(0x109f9440u), t15);
    g->eax = t15;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t16 = cow_cdecl(g, COW_IMG(0x103154e6u), 1, t15);
    t17 = g->edx;
    esi = COW_IMG(0x103d025cu) + esi;
    edi = COW_IMG(0x109f9450u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    t18 = rd32(sp0 - 0x2cu);
    wr32(COW_IMG(0x109f9664u), t16);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    eax = t16;
    ecx = t18;
    edx = t17;
    goto L_10315480;
L_1031542e: ;
    COW_AT(1031542e)
    if (rd8(ecx + 1u) != 0u)
    {
        ecx = ecx + 2u;
        goto L_10315381;
    }
    ecx = ecx + 2u;
    goto L_1031543a;
L_10315472: ;
    COW_AT(10315472)
    if (rd32(COW_IMG(0x109b26c0u)) == 0u) goto L_1031548a;
    loc_4 = rd32(sp0 - 4u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
L_1031547b: ;
    COW_AT(1031547b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t19 = cow_stdcall(g, COW_IMG(0x10315519u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    goto L_10315480;
L_1031548a: ;
    COW_AT(1031548a)
    esi = 0xffffffffu;
    loc_4 = rd32(sp0 - 4u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    goto L_1031548d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103152ef(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10315316u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031531du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0x19u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315325u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0x19u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031532cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0x19u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315330u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0x19u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031533bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ecx = 0x19u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315351u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315374u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031537eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315381u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031538bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315392u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031539au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x103153a4u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103153c1u:
    {
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103153c8u:
    {
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103153cfu:
    {
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103153d9u:
    {
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103153e2u:
    {
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103153edu:
    {
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103153f4u:
    {
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315400u:
    {
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
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031542eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031543au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031543cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031544bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031545fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315466u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315472u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031547bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315480u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031548au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031548du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103152ef(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103152ef(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
