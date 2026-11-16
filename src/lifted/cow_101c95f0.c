/* f_0x101c95f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c95f0(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_101c9605;
    }
    return 0u;
L_101c9605: ;
    wr32(sp0 - 0x18u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        edi = t1;
        goto L_101c961b;
    }
    eax = t1;
    edx = t2;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101c961b: ;
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->eax = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 - 8u, sp0 - 4u);
    t4 = g->edx;
    if (rd8(esi) == 0u)
    {
        edx = t4;
        ebx = 0u;
        goto L_101c96b7;
    }
    eax = (t3 & 0xffffff00u) | rd8(esi);
    edx = t4;
    ebx = 0u;
    ebp = esi;
L_101c963b: ;
    if (ebp == esi)
    {
        ecx = 0u;
    }
    else
    {
        ecx = (uint32_t)(int8_t)rd8(esi - 1u);
    }
    wr8(sp0 + 4u, (uint8_t)eax);
    if ((uint8_t)eax != 0x85u)
    {
        if ((uint8_t)ecx != 0x85u) goto L_101c9670;
        if ((uint8_t)eax != 0xdau) goto L_101c9662;
        eax = rd32(rd32(edi) + 0x17cu);
        edx = rd32(edi);
L_101c968d: ;
        if (eax != 0u)
        {
            t5 = (uint32_t)(int16_t)rd16(eax + 0x22u) - (uint32_t)(int16_t)rd16(eax + 0x20u) - 1u;
            wr32(sp0 - 0xcu, t5);
            g->edx = (uint32_t)(int16_t)rd16(eax + 0x20u);
            t6 = rd16(eax + 0x20u);
            d7 = fr(g, (double)(int32_t)t5 * (double)rdf32(sp0 - 8u));
            fpush(g, d7);
            g->esp = sp0 - 0x1cu;
            t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t9 = g->edx;
            eax = t8;
            edx = t9;
            ebx = ebx + t8;
        }
    }
L_101c96af: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_101c963b;
    }
L_101c96b7: ;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return ebx;
L_101c9662: ;
    if ((uint8_t)eax != 0xc8u) goto L_101c9670;
    eax = rd32(rd32(edi) + 0x180u);
    goto L_101c968d;
L_101c9670: ;
    if ((int32_t)((uint8_t)rd32(sp0 + 4u) - 0x20u) < 0)
    {
        eax = (uint8_t)rd32(sp0 + 4u) - 0x20u;
        goto L_101c96af;
    }
    eax = (uint8_t)rd32(sp0 + 4u) - 0x20u;
    if ((int32_t)eax > 139) goto L_101c96af;
    eax = rd32(eax * 4u + rd32(edi));
    edx = rd32(edi);
    goto L_101c968d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c95f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c95f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
