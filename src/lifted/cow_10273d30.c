/* f_0x10273d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10273d30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(arg1 + 8u) <= 0)
    {
        ecx = self;
        edx = in_edx;
        goto L_10273d57;
    }
    eax = rd32(arg1 + 8u);
    ecx = self;
    edx = in_edx;
    edi = 0u;
L_10273d44: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10273f60u), 3, arg1, edi, arg2);
    t1 = g->ecx;
    t2 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 8u))
    {
        eax = rd32(arg1 + 8u);
        ecx = t1;
        edx = t2;
        edi = edi + 1u;
        goto L_10273d44;
    }
    ecx = t1;
    edx = t2;
L_10273d57: ;
    if ((int32_t)rd32(arg1 + 0x18u) <= 0)
    {
        eax = rd32(arg1 + 0x18u);
        goto L_10273d73;
    }
    eax = rd32(arg1 + 0x18u);
    edi = 0u;
L_10273d60: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10274360u), 3, arg1, edi, arg2);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x18u))
    {
        eax = rd32(arg1 + 0x18u);
        ecx = t3;
        edx = t4;
        edi = edi + 1u;
        goto L_10273d60;
    }
    eax = rd32(arg1 + 0x18u);
    edx = t4;
L_10273d73: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10273d30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
