/* f_0x1021fbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1021fbd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    if ((uint8_t)arg1 == 0u)
    {
        t4 = rd32(rd32(COW_IMG(0x1057847cu)) + 8u);
        g->esp = sp0 - 0x18u;
        t5 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t4, g->edx, 0, 1, sp0 - 0xcu);
        t6 = g->ecx;
        eax = t5;
        ecx = t6;
        ebp = rd32(sp0 - 0xcu);
    }
    else
    {
        t1 = rd32(rd32(COW_IMG(0x10663accu)) + 8u);
        g->esp = sp0 - 0x18u;
        t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t1, g->edx, 0, 1, sp0 - 0xcu);
        t3 = g->ecx;
        eax = t2;
        ecx = t3;
        ebp = rd32(sp0 - 8u) - 0x66u;
    }
    wr32(sp0 - 0x1cu, in_ebx);
    if ((int32_t)arg4 <= 0)
    {
        edx = rd32(sp0 - 6u);
        edi = rd32(sp0 - 6u) + 2u;
        goto L_1021fc97;
    }
    edx = rd32(sp0 - 6u);
    esi = 0u;
    edi = rd32(sp0 - 6u) + 2u;
L_1021fc32: ;
    if (rd32(rd32(arg3 + esi * 4u) + 0xa0u) != 0u)
    {
        eax = rd32(arg3 + esi * 4u);
        wr32(sp0 - 0x20u, arg6 + esi);
        t7 = (eax & 0xffffff00u) | rd8(eax + 0xecu);
        wr32(sp0 - 0x24u, t7);
        wr32(sp0 - 0x28u, edi + 7u);
        wr32(sp0 - 0x2cu, ebp + 0x1au);
        g->ebx = arg4;
        g->edx = ebp + 0x1au;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x101cb090u), 4, ebp + 0x1au, edi + 7u, t7, arg6 + esi);
        t8 = g->edx;
        edx = t8;
    }
    if (rd16(rd32(arg3 + esi * 4u) + 0x210u) == 0u)
    {
        eax = rd32(arg3 + esi * 4u);
        eax = eax + 0x7cu;
    }
    else
    {
        eax = rd32(arg3 + esi * 4u);
        eax = eax + 0x214u;
    }
    wr32(sp0 - 0x20u, arg5);
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, 0x66u);
    g->eax = eax;
    g->ecx = arg5;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x66u, ebp, edi, eax, arg5);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)(esi + 1u) < (int32_t)arg4)
    {
        edx = t11;
        esi = esi + 1u;
        edi = edi + 0x10u;
        goto L_1021fc32;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    edi = edi + 0x10u;
L_1021fc97: ;
    wr32(sp0 - 0x1cu, 0x80808080u);
    if ((uint8_t)arg1 == 0u)
    {
        edi = edi + 4u;
        goto L_1021fcc3;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    edi = edi + 4u;
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, ebp + 0x52u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebp + 0x52u, edi, arg2, 0x80808080u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_1021fcc3: ;
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, ebp);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebp, edi, arg2, 0x80808080u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021fbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021fbd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
