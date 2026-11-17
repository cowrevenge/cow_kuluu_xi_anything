/* f_0x10304332 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10304332(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(rd32(sp0 + 4u) + 0x168u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        edi = rd32(rd32(sp0 + 4u) + 0x194u);
        goto L_10304367;
    }
    esi = rd32(sp0 + 4u);
    edi = rd32(rd32(sp0 + 4u) + 0x194u);
    if (rd32(esi + 0x16cu) != 0x3fu) goto L_10304367;
    if (rd32(esi + 0x170u) != 0u) goto L_10304367;
    if (rd32(esi + 0x174u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1030437a;
    }
L_10304367: ;
    wr32(rd32(esi) + 0x14u, 0x76u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall_cdecl(g, rd32(rd32(esi) + 4u), self, 2, esi, 0xffffffffu);
    t1 = g->edx;
    ecx = 0xffffffffu;
    edx = t1;
L_1030437a: ;
    if ((int32_t)rd32(esi + 0x120u) > 0)
    {
        wr32(sp0 + 4u, esi + 0x124u);
        loc_c = 0u;
        loc_8 = edi + 0x20u;
L_10304398: ;
        t2 = rd32(rd32(rd32(sp0 + 4u)) + 0x18u);
        if ((int32_t)rd32(rd32(rd32(sp0 + 4u)) + 0x14u) < 0)
        {
            ebx = rd32(rd32(rd32(sp0 + 4u)) + 0x14u);
            loc_10 = t2;
            goto L_103043b9;
        }
        eax = t2;
        ebx = rd32(rd32(rd32(sp0 + 4u)) + 0x14u);
        loc_10 = t2;
        if ((int32_t)ebx >= 4) goto L_103043b9;
        if (rd32(ebx * 4u + esi + 0xa0u) != 0u) goto L_103043d0;
L_103043b9: ;
        wr32(rd32(esi) + 0x14u, 0x31u);
        wr32(rd32(esi) + 0x18u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), ecx, 1, esi);
        t3 = g->edx;
        eax = loc_10;
        ecx = esi;
        edx = t3;
L_103043d0: ;
        if ((int32_t)eax < 0) goto L_103043e3;
        if ((int32_t)eax >= 4) goto L_103043e3;
        if (rd32(eax * 4u + esi + 0xb0u) != 0u) goto L_103043f7;
L_103043e3: ;
        wr32(rd32(esi) + 0x14u, 0x31u);
        t4 = rd32(esi);
        wr32(t4 + 0x18u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), t4, 1, esi);
        t5 = g->edx;
        ecx = esi;
        edx = t5;
L_103043f7: ;
        t6 = ebx * 4u + edi + 0x34u;
        t7 = rd32(ebx * 4u + esi + 0xa0u);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10303b89u), g->eax, g->ecx, edx, 1, 5, esi, t7, t6, in_edi, in_esi);
        t8 = g->edx;
        t9 = edi + loc_10 * 4u + 0x44u;
        t10 = rd32(esi + loc_10 * 4u + 0xb0u);
        g->ecx = t9;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x10303b89u), g->eax, g->ecx, t8, 1, 5, esi, t10, t9, esi, t7);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(loc_8, 0u);
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 4u);
        if ((int32_t)(loc_c + 1u) < (int32_t)rd32(esi + 0x120u))
        {
            ecx = t11;
            edx = t12;
            loc_c = loc_c + 1u;
            loc_8 = loc_8 + 4u;
            goto L_10304398;
        }
        edx = t12;
    }
    wr8(edi + 0x18u, 0u);
    wr32(edi + 0x14u, 0u);
    wr32(edi + 8u, 0u);
    wr32(edi + 0xcu, 0u);
    wr32(edi + 0x10u, 0u);
    t13 = rd32(esi + 0xfcu);
    wr32(edi + 0x30u, t13);
    g->edx = edx;
    return t13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10304332(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10304332(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
