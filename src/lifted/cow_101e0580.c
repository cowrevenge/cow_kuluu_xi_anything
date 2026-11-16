/* f_0x101e0580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e0580(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd16(arg1) < 513)
    {
        eax = rd16(arg1);
        goto L_101e05a5;
    }
    eax = rd16(arg1);
    if ((int32_t)eax > 515) goto L_101e05a5;
    return 0x80404040u;
L_101e05a5: ;
    t1 = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    t2 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 8u;
    t3 = cow_fastcall(g, COW_IMG(0x10131f10u), t2, in_edx, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_101e05c4;
    }
    edx = t5;
    g->edx = edx;
    return 0x80404040u;
L_101e05c4: ;
    if (rd8(arg1 + 2u) != rd8(self + 4u))
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 2u);
        goto L_101e05d8;
    }
    g->edx = edx;
    return 0x80404040u;
L_101e05d8: ;
    g->esp = sp0 - 8u;
    t6 = cow_fastcall(g, COW_IMG(0x101e0df0u), rd32(COW_IMG(0x106634acu)), edx, 1, eax);
    t7 = g->edx;
    g->edx = t7;
    return (-((uint8_t)t6 != 0u) & 0xffffbfa0u) - 0x7f7f7f80u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e0580(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
