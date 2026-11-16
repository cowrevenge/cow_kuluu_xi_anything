/* f_0x1019c210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019c210(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    int64_t q3;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0x41u);
    t2 = g->edx;
    wr16(self + 0x20u, (uint16_t)t1);
    if ((int16_t)t1 > 0)
    {
        eax = t1;
        edx = t2;
        q3 = (int64_t)cow_muls(0x66666667u, (uint32_t)(int16_t)eax);
        t4 = (uint32_t)((int32_t)cow_qhi(q3) >> 2u);
        wr16(self + 0x22u, (uint16_t)(t4 + (t4 >> 0x1fu) + 2u));
        eax = t4 >> 0x1fu;
        edx = t4;
    }
    else
    {
        eax = t1;
        edx = t2;
        wr16(self + 0x22u, 9u);
    }
    if ((int16_t)rd16(self + 0x22u) < 3)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
        goto L_1019c258;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
    if ((int16_t)eax <= 9) goto L_1019c25e;
L_1019c258: ;
    wr16(self + 0x22u, 9u);
L_1019c25e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019c210(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
