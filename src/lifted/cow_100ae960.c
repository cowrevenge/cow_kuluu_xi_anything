/* f_0x100ae960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ae960(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x10487e48u)) == 0u) goto L_100ae9ab;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x100a0660u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_stdcall(g, COW_IMG(0x100ae3f0u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    t7 = (eax & 0xffffff00u) | rd8(COW_IMG(0x1035cfa0u));
    g->eax = t7;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x100ae9b0u), 0);
    t9 = g->edx;
    t10 = rd32(COW_IMG(0x106671b8u));
    g->esp = sp0;
    t11 = cow_fastcall(g, COW_IMG(0x10221c70u), t10, t9, 0);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = cow_call_regs(g, COW_IMG(0x100852d0u), g->eax, g->ecx, t13, 1, 0);
    t15 = g->edx;
    t16 = rd32(COW_IMG(0x10621944u));
    wr8(COW_IMG(0x1065cb20u), 0u);
    if (t16 == 0u) goto L_100ae9ab;
    eax = t14;
    ecx = t16;
    edx = t15;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101632a0u), eax, ecx, edx);
    return;
L_100ae9ab: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ae960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ae960(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
