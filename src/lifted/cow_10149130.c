/* f_0x10149130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10149130(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10149070u), rd32(COW_IMG(0x10578408u)), 0);
    t2 = g->edx;
    g->ecx = rd32(COW_IMG(0x106218fcu));
    g->edx = t2;
    t3 = rd32(COW_IMG(0x106218fcu));
    t4 = cow_stdcall(g, COW_IMG(0x10160fb0u), 1, t1);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_10149190;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (rd8(eax + 3u) == 0u) goto L_10149190;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    if (rd32(self + 0x38u) == 0u)
    {
        eax = t7;
        goto L_1014918c;
    }
    eax = t7;
    edx = rd32(self + 0x38u);
    if ((int32_t)eax >= (int16_t)rd16(self + 0x20u)) goto L_1014918c;
    if (eax * 0x54u + edx == 0u)
    {
        eax = eax * 0x15u;
        goto L_1014918c;
    }
    ecx = eax * 0x54u + edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x101f4b60u), ecx, 1, 1u);
    if (t8 == 0x80404040u)
    {
        eax = t8;
        goto L_10149190;
    }
    eax = t8;
L_1014918c: ;
    return (eax & 0xffffff00u) | 1u;
L_10149190: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
