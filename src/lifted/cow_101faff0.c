/* f_0x101faff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101faff0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        ebx = (in_ebx & 0xffffff00u) | rd8(arg2);
        goto L_101fb052;
    }
    eax = rd32(COW_IMG(0x10663888u));
    ebx = (in_ebx & 0xffffff00u) | rd8(arg2);
    t1 = rd16(eax + 0x110u);
    t2 = rd16(eax + 0x112u);
    wr16(eax + 0x110u, 0xffffu);
    wr16(rd32(COW_IMG(0x10663888u)) + 0x112u, 0xffffu);
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_101fb052;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = (uint32_t)(int16_t)t1;
    esi = (in_esi & 0xffff0000u) | t2;
    if ((int32_t)ecx < 0) goto L_101fb052;
    t3 = (uint32_t)(int16_t)rd16(arg2 + 4u);
    t4 = (uint32_t)(int16_t)rd16(arg2 + 2u);
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x101f79e0u), (uint32_t)(int16_t)esi, t4, arg2, 1, 4, t4, ecx, (uint32_t)(int16_t)esi, t3);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101fb052: ;
    if ((uint8_t)ebx == 0u)
    {
        edx = arg2;
    }
    else
    {
        t7 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        g->ebx = ebx;
        g->edx = rd32(COW_IMG(0x1057823cu));
        t8 = rd32(COW_IMG(0x1057823cu));
        g->esp = sp0 - 8u;
        t9 = cow_call_regs(g, COW_IMG(0x1015e530u), t7, COW_IMG(0x10621838u), g->edx, 0, 1, t7);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101faff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101faff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
