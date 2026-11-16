/* f_0x1007c920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007c920(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_edi);
    if (arg2 != 0u) goto L_1007c94e;
    if (rd8(COW_IMG(0x1047d4c1u)) != 0u)
    {
        eax = arg2;
        edx = 0u;
        goto L_1007ca31;
    }
    wr32(sp0 - 0x20u, 0x77u);
    g->edx = 0u;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x77u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1007c94e: ;
    if (rd32(arg2) == 1u) goto L_1007c9c6;
    ecx = rd32(arg2) - 1u;
    if (ecx != 2u)
    {
        eax = arg2;
        edx = 0u;
        goto L_1007ca31;
    }
    ecx = ecx - 2u;
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    t3 = rd32(arg2 + 8u) + 4u;
    eax = arg1;
    ebx = in_ebx;
    ebp = rd32(arg2 + 8u);
    esi = t3;
    edi = t3;
L_1007c96a: ;
    if (rd8(eax) != rd8(esi))
    {
        cf = rd8(eax) < rd8(esi);
        goto L_1007c98e;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1007c98a;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1007c98e;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1007c96a;
    }
L_1007c98a: ;
    eax = 0u;
L_1007c993: ;
    if (eax != 0u)
    {
        edx = 0u;
        goto L_1007ca31;
    }
    wr32(sp0 - 0x10u, rd32(edi));
    t4 = rd32(edi + 4u);
    wr32(sp0 - 0xcu, t4);
    t5 = rd32(edi + 8u);
    wr32(sp0 - 8u, t5);
    edx = rd32(ebp + 0x14u);
L_1007c9ff: ;
    wr32(sp0 - 0x20u, 0x77u);
    wr32(sp0 - 0x24u, COW_IMG(0x1007c8e0u));
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    wr32(sp0 - 0x14u, edx);
    wr8(COW_IMG(0x1047d4c1u), 1u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t8 = cow_cdecl(g, COW_IMG(0x100e0bc0u), 4, sp0 - 0x14u, 1u, COW_IMG(0x1007c8e0u), 0x77u);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
    }
    else
    {
        edx = t9;
        wr32(sp0 - 0x20u, 0x77u);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t10 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x77u);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
L_1007ca31: ;
    g->edx = edx;
    return eax;
L_1007c98e: ;
    eax = -cf + 1u - cf;
    goto L_1007c993;
L_1007c9c6: ;
    if (rd32(arg2 + 8u) == 0u) goto L_1007c9d7;
    wr8(COW_IMG(0x1047d4c1u), 0u);
    g->edx = 0u;
    return arg2;
L_1007c9d7: ;
    wr32(sp0 - 0x10u, rd32(arg1));
    t6 = rd32(arg1 + 4u);
    wr32(sp0 - 0xcu, t6);
    t7 = rd32(arg1 + 8u);
    wr32(sp0 - 8u, t7);
    edx = 0u;
    goto L_1007c9ff;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007c920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007c920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
