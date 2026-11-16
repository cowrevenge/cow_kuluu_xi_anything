/* f_0x1031ad40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_1031ad40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const double xin0 = ST(0);
    const double xin1 = ST(1);

    wr8(in_ebp - 0x90u, 0xfeu);
    if ((uint8_t)(self >> 8u) != 0u) goto L_1031ad96;
    eax = in_eax;
    ecx = (self & 0xffff00ffu) | (uint8_t)(self >> 8u) << 8u;
    edx = in_edx;
    x1 = xin1;
L_1031ad4d: ;
    g->esp = sp0;
    g->edx = edx;
    g->top = (g->top + 2u) & 7u;
    fpush(g, fr(g, xin0 * log2(x1)));
    return cow_tailcall(g, COW_IMG(0x1031ad5eu), eax, ecx, edx);
L_1031ad96: ;
    g->ecx = (self & 0xffff00ffu) | (uint8_t)(self >> 8u) << 8u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x1031aee1u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1031adb3;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (eax == 2u)
    {
        ecx = ecx & 0xffff00ffu;
    }
    else
    {
        ecx = ecx & 0xffff00ffu;
        ecx = (ecx & 0xffff00ffu) | (uint8_t)~(uint8_t)(ecx >> 8u) << 8u;
    }
    x1 = fabs(xin1);
    goto L_1031ad4d;
L_1031adb3: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1031b0f6u), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031ad40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031ad40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
