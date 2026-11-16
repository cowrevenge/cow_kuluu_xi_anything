/* f_0x1007d2c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007d2c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (!(t1 >> 8u & 1u))
    {
        ecx = t2;
        edx = t3;
        goto L_1007d2dc;
    }
    edx = t3;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 2u);
    t4 = g->edx;
    g->edx = t4;
    return arg3;
L_1007d2dc: ;
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        goto L_1007d2f1;
    }
    eax = rd32(COW_IMG(0x10663888u));
    if (rd32(eax + 8u) != 0u)
    {
        edx = rd32(eax + 8u);
        goto L_1007d2fb;
    }
    edx = rd32(eax + 8u);
    eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
L_1007d2f1: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x101f7810u), 1, 0u);
    t5 = g->edx;
    edx = t5;
L_1007d2fb: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007d2c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007d2c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
