/* f_0x10278c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10278c10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10277a70u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t4;
        edi = t1;
        goto L_10278c4f;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103b3bc4u));
    wr32(sp0 + 4u, COW_IMG(0x103b3ae4u));
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, COW_IMG(0x102858b0u), t5, t6, t7);
    return;
L_10278c4f: ;
    if ((int32_t)rd32(edi + 0xa4u) > 0)
    {
        ebp = rd32(sp0 + 8u);
        esi = 0u;
L_10278c64: ;
        t8 = rd32(esi * 4u + rd32(edi + 0x9cu));
        g->eax = rd32(edi + 0x9cu);
        g->edx = edx;
        t9 = rd32(edi + 0x9cu);
        g->esp = sp0 - 0xcu;
        t10 = cow_cdecl(g, COW_IMG(0x1028f450u), 3, ebp, t8, in_ebp);
        t11 = g->edx;
        wr8(t10 + 0x1du, 0xffu);
        wr8(t10 + 0x1cu, 0xffu);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0xa4u))
        {
            edx = t11;
            esi = esi + 1u;
            goto L_10278c64;
        }
    }
    t12 = (rd32(edi + 0xa8u) & 0xffffff00u) | (uint8_t)(rd32(edi + 0xa8u) | 4u);
    wr32(edi + 0xa8u, t12);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10278c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10278c10(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
