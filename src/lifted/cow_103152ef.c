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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, 0x19u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x19u, in_edi, in_esi);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(sp0 + 4u);
    wr32(sp0 - 0x30u, t3);
    g->edx = t2;
    g->esp = sp0 - 0x2cu;
    t4 = cow_cdecl(g, COW_IMG(0x1031549cu), 1, t3);
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x109f9440u));
    wr32(sp0 + 4u, t4);
    if (t4 != t6)
    {
        eax = t4;
        edx = t5;
        ebx = t4;
        goto L_1031531d;
    }
    eax = t4;
    ecx = 0x19u;
    edx = t5;
L_10315316: ;
    esi = 0u;
    loc_4 = in_ebp;
    loc_20 = in_ebx;
    loc_24 = in_esi;
    loc_28 = in_edi;
L_1031548d: ;
    wr32(sp0 - 0x2cu, 0x19u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x19u, loc_28, loc_24);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 4u);
    return esi;
L_1031531d: ;
    if (ebx == 0u)
    {
        ecx = 0x19u;
        goto L_1031547b;
    }
    eax = COW_IMG(0x103d0258u);
    edx = 0u;
L_1031532c: ;
    if (rd32(eax) == ebx) goto L_103153a4;
    if (eax + 0x30u < COW_IMG(0x103d0348u))
    {
        eax = eax + 0x30u;
        edx = edx + 1u;
        goto L_1031532c;
    }
    edx = edx + 1u;
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    wr32(sp0 - 0x30u, ebx);
    g->eax = sp0 - 0x1cu;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t7 = cow_thiscall(g, rd32(COW_IMG(0x10329274u)), 0x19u, 2, ebx, sp0 - 0x1cu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    if (t7 != 1u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10315472;
    }
    edx = t9;
    wr32(sp0 - 0x2cu, 0x40u);
    wr32(COW_IMG(0x109f9664u), 0u);
    t10 = rd32(sp0 - 0x1cu);
    edi = COW_IMG(0x109f9560u);
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(COW_IMG(0x109f9440u), ebx);
    if (t10 <= 1u)
    {
        wr32(COW_IMG(0x109f945cu), 0u);
    }
    else
    {
        if (rd8(sp0 - 0x16u) != 0u)
        {
            ecx = sp0 - 0x15u;
L_10315381: ;
            if (rd8(ecx) == 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(ecx);
                goto L_1031543a;
            }
            edx = (edx & 0xffffff00u) | rd8(ecx);
            eax = rd8(ecx - 1u);
            edx = (uint8_t)edx;
L_10315392: ;
            if (eax > edx) goto L_1031542e;
            wr8(COW_IMG(0x109f9561u) + eax, rd8(COW_IMG(0x109f9561u) + eax) | 4u);
            eax = eax + 1u;
            goto L_10315392;
        }
L_1031543a: ;
        eax = 1u;
L_1031543c: ;
        wr8(COW_IMG(0x109f9561u) + eax, rd8(COW_IMG(0x109f9561u) + eax) | 8u);
        if (eax + 1u < 0xffu)
        {
            eax = eax + 1u;
            goto L_1031543c;
        }
        wr32(sp0 - 0x2cu, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t11 = cow_cdecl(g, COW_IMG(0x103154e6u), 1, ebx);
        t12 = g->edx;
        t13 = rd32(sp0 - 0x2cu);
        wr32(COW_IMG(0x109f9664u), t11);
        wr32(COW_IMG(0x109f945cu), 1u);
        ecx = t13;
        edx = t12;
    }
    edi = COW_IMG(0x109f9450u);
    eax = 0u;
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
L_10315480: ;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t21 = cow_fastcall(g, COW_IMG(0x10315542u), ecx, edx, 0);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    goto L_10315316;
L_103153a4: ;
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
    if (rd8(ebx) == 0u)
    {
        ecx = ebx;
        goto L_103153f4;
    }
    ecx = ebx;
L_103153c8: ;
    if (rd8(ecx + 1u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        goto L_103153f4;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    if (rd8(ecx) <= (uint8_t)edx)
    {
        eax = rd8(ecx);
        edi = (uint8_t)edx;
        edx = (loc_8 & 0xffffff00u) | rd8(COW_IMG(0x103d0250u) + loc_8);
L_103153e2: ;
        wr8(COW_IMG(0x109f9561u) + eax, (uint8_t)(rd8(COW_IMG(0x109f9561u) + eax) | edx));
        if (eax + 1u <= edi)
        {
            eax = eax + 1u;
            goto L_103153e2;
        }
    }
    if (rd8(ecx + 2u) != 0u)
    {
        ecx = ecx + 2u;
        goto L_103153c8;
    }
    ecx = ecx + 2u;
L_103153f4: ;
    wr32(sp0 - 8u, loc_8 + 1u);
    if (loc_8 + 1u < 4u)
    {
        ebx = ebx + 8u;
        loc_8 = loc_8 + 1u;
        goto L_103153c1;
    }
    t14 = rd32(sp0 + 4u);
    wr32(COW_IMG(0x109f945cu), 1u);
    wr32(sp0 - 0x2cu, t14);
    wr32(COW_IMG(0x109f9440u), t14);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t15 = cow_cdecl(g, COW_IMG(0x103154e6u), 1, t14);
    t16 = g->edx;
    esi = COW_IMG(0x103d025cu) + esi;
    edi = COW_IMG(0x109f9450u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    t17 = rd32(sp0 - 0x2cu);
    wr32(COW_IMG(0x109f9664u), t15);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    eax = t15;
    ecx = t17;
    edx = t16;
    goto L_10315480;
L_1031542e: ;
    if (rd8(ecx + 1u) != 0u)
    {
        ecx = ecx + 2u;
        goto L_10315381;
    }
    ecx = ecx + 2u;
    goto L_1031543a;
L_10315472: ;
    if (rd32(COW_IMG(0x109b26c0u)) == 0u) goto L_1031548a;
L_1031547b: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t18 = cow_stdcall(g, COW_IMG(0x10315519u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    goto L_10315480;
L_1031548a: ;
    esi = 0xffffffffu;
    goto L_1031548d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103152ef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103152ef(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
