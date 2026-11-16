/* f_0x102164c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102164c0(Guest* g)
{
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->ecx = t2;
    g->edx = t3;
    d5 = fr(g, d4 * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 <= 0) goto L_102164ed;
    eax = t6;
    ecx = t7;
    edx = t8;
    esi = 0u;
    edi = t6;
L_102164db: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_stdcall(g, COW_IMG(0x10310a26u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        goto L_102164f1;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    if ((int32_t)(esi + 1u) < (int32_t)edi)
    {
        esi = esi + 1u;
        goto L_102164db;
    }
    return eax;
L_102164ed: ;
    eax = self;
L_102164f1: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102164c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102164c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
