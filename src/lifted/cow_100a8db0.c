/* f_0x100a8db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100a8db0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg2 + 0x68u) == 0u)
    {
        eax = arg2;
        edx = in_edx;
        goto L_100a8df6;
    }
    edi = rd32(arg2 + 0x68u);
    eax = arg2;
L_100a8dc2: ;
    g->eax = eax;
    g->edx = rd32(edi);
    t1 = rd32(edi);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), edi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_100a8def;
    }
    edx = t3;
    esi = t2;
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x1032b7f8u));
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100a8def;
    }
    eax = t4;
    edx = t5;
    if (arg1 == esi) goto L_100a8def;
    if (rd32(esi + 0xacu) == COW_IMG(0x100a8db0u)) goto L_100a8e01;
L_100a8def: ;
    if (rd32(edi + 0x2cu) != 0u)
    {
        edi = rd32(edi + 0x2cu);
        goto L_100a8dc2;
    }
L_100a8df6: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x100d44b0u), arg2, 1, 6u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_100a8e01: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a8db0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
