/* f_0x10089e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
void cow_fn_10089e80(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t3;
    double x0;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    cow_thiscall_cdecl(g, COW_IMG(0x10123970u), arg1, 2, arg1, arg2);
    t1 = g->ecx;
    d2 = cow_take_float(g);
    t3 = (t1 & 0xffffff00u) | rd8(arg3);
    if ((uint8_t)t3 == 0u)
    {
        eax = (uint8_t)t3;
        ecx = t3;
        x0 = d2;
        goto L_10089ec1;
    }
    eax = (uint8_t)t3;
    x0 = d2;
    if (eax != 1u) goto L_10089ed2;
    eax = eax - 1u;
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_10089ebd;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
L_10089ebd: ;
    wr8(arg3, 0u);
    fpush(g, x0);
    return;
L_10089ec1: ;
    if (x0 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr8(arg3, (uint8_t)((uint8_t)ecx + 1u));
    }
L_10089ed2: ;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10089e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10089e80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
