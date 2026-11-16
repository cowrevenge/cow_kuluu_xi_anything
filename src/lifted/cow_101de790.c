/* f_0x101de790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101de790(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, sp0 + 8u);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->eax = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x101cb960u), 3, arg1, arg2, sp0 + 8u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101de7c2;
    }
    eax = t1;
    edx = t2;
    if ((arg2 & 2u) == 0u) goto L_101de7c2;
    g->edx = edx;
    return 0x80404040u;
L_101de7c2: ;
    wr32(sp0 - 0x10u, sp0 + 8u);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x101cba20u), 3, arg1, arg2, sp0 + 8u);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        goto L_101de7e7;
    }
    edx = t4;
    if ((arg2 & 2u) == 0u) goto L_101de7e7;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0x80404040u;
L_101de7e7: ;
    wr32(sp0 - 0x10u, 0u);
    t5 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x14u, t5);
    g->esp = sp0 - 0xcu;
    t6 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t5, 2, t5, 0u);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t7;
        goto L_101de807;
    }
    edx = t7;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0x80404040u;
L_101de807: ;
    if ((int32_t)rd16(arg1) < 513) goto L_101de825;
    eax = rd16(arg1);
    if ((int32_t)eax > 515) goto L_101de825;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0x80404040u;
L_101de825: ;
    if ((rd32(rd32(arg2 + 0x14bcu)) >> 8u & 0x40u) == 0u)
    {
        eax = rd32(arg2 + 0x14bcu);
        ecx = rd32(rd32(arg2 + 0x14bcu));
        goto L_101de83d;
    }
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0x80404040u;
L_101de83d: ;
    if (rd8(self + 0x10u) == 0u) goto L_101de853;
    eax = (eax & 0xffffff00u) | rd8(self + 0x10u);
    if (rd8(self + 0x11u) == rd8(arg1 + 2u))
    {
        eax = 0x80804020u;
        goto L_101de858;
    }
L_101de853: ;
    eax = 0x80808080u;
L_101de858: ;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de790(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
