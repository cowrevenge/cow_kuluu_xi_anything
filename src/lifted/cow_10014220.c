/* f_0x10014220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10014220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (!(t1 >> 8u & 1u))
    {
        ecx = t2;
        edx = t3;
        goto L_10014256;
    }
    ecx = t2;
    edx = t3;
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1001423c;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    return eax & 0xffffff00u;
L_1001423c: ;
    t4 = (uint32_t)(int16_t)rd16(eax + 0x40d80u);
    wr32(self + 0x4cu, t4);
    wr32(COW_IMG(0x104570e0u), t4);
    g->eax = t4;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x1001e470u), 0);
    return (t5 & 0xffffff00u) | 1u;
L_10014256: ;
    if ((uint16_t)arg1 != 0u) goto L_10014282;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x100db930u), 0);
    t7 = g->edx;
    wr32(self + 0x4cu, (uint32_t)(int16_t)t6);
    wr32(COW_IMG(0x104570e0u), (uint32_t)(int16_t)t6);
    g->eax = (uint32_t)(int16_t)t6;
    t8 = cow_stdcall(g, COW_IMG(0x1001e470u), 0);
    return (t8 & 0xffffff00u) | 1u;
L_10014282: ;
    t9 = (uint32_t)(int16_t)(arg1 - 1u);
    wr32(self + 0x4cu, t9);
    wr32(COW_IMG(0x104570e0u), t9);
    g->eax = t9;
    g->esp = sp0 - 4u;
    t10 = cow_stdcall(g, COW_IMG(0x1001e470u), 0);
    return (t10 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10014220(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
