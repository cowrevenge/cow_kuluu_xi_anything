/* f_0x101f0810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101f0810(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc3e0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_101f0822;
    }
    edx = t2;
L_101f081b: ;
    g->edx = edx;
    return 0u;
L_101f0822: ;
    if (rd16(rd32(arg2 + 0x14b4u)) == 8u) goto L_101f08a2;
    eax = (rd32(arg2 + 0x14b4u) & 0xffff0000u) | rd16(rd32(arg2 + 0x14b4u));
    if ((uint16_t)eax == 0x16u) goto L_101f08a2;
    if ((uint16_t)eax == 0x17u) goto L_101f08a2;
    t3 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    g->esp = sp0 - 8u;
    t4 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t3, 2, t3, rd32(COW_IMG(0x10663780u)));
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        goto L_101f088d;
    }
    edx = t5;
    if (rd8(rd32(arg2 + 0x151cu)) == 0u) goto L_101f081b;
    t6 = (edx & 0xffff0000u) | rd16(arg1);
    g->edx = t6;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x100febe0u), 2, t6, arg1 + 0x10u);
    t8 = g->edx;
    g->edx = t8;
    return (-((uint8_t)t7 != 0u) & 0x3050u) - 0x7fbfbfc0u;
L_101f088d: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x1015b6c0u), arg2, 0);
    t10 = g->edx;
    g->edx = t10;
    return -((uint8_t)t9 != 0u) & 0x80909040u;
L_101f08a2: ;
    g->edx = edx;
    return 0x80909040u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f0810(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
