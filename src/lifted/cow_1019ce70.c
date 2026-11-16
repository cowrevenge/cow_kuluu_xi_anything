/* f_0x1019ce70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1019ce70(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr8(self + 0x29u, 0x1eu);
    wr8(self + 0x2au, 0x17u);
    wr8(self + 0x2bu, 0x32u);
    wr8(self + 0x2cu, 0x24u);
    wr8(self + 0x2du, 0x11u);
    wr8(self + 0x2eu, 0x30u);
    wr8(self + 0x2fu, 0x15u);
    wr8(self + 0x30u, 0x31u);
    wr8(self + 0x31u, 0xcu);
    wr8(self + 0x32u, 0x21u);
    wr8(self + 0x33u, 0x1bu);
    wr8(self + 0x34u, 0x1au);
    wr8(self + 0x35u, 0x2cu);
    wr8(self + 0x36u, 0x34u);
    wr8(self + 0x37u, 0x33u);
    wr8(self + 0x38u, 0u);
    wr8(self + 0x39u, 0u);
    wr8(self + 0x3au, 0x12u);
    wr8(self + 0x3bu, 0x2fu);
    wr8(self + 0x3cu, 0x23u);
    wr8(self + 0x3du, 0x2eu);
    wr8(self + 0x3eu, 0x1fu);
    wr8(self + 0x3fu, 0x19u);
    wr8(self + 0x40u, 0x14u);
    wr8(self + 0x41u, 0x26u);
    wr8(self + 0x42u, 0x13u);
    wr8(self + 0x43u, 0x16u);
    wr8(self + 0x44u, 0x2du);
    wr8(self + 0x45u, 0x10u);
    wr8(self + 0x46u, 0u);
    wr8(self + 0x47u, 0u);
    wr8(self + 0x48u, 0u);
    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) == 2u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u) - 2u;
        wr8(self + 0x2fu, 0x2cu);
        wr8(self + 0x35u, 0x15u);
        wr8(self + 0x31u, 0xf3u);
        wr8(self + 0x33u, 0x1au);
        wr8(self + 0x34u, 0x1bu);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u) - 2u;
        if (eax != 1u)
        {
            eax = eax - 1u;
        }
        else
        {
            eax = eax - 1u;
            wr8(self + 0x31u, 0xfcu);
            wr8(self + 0x33u, 0xf9u);
            wr8(self + 0x34u, 0xfau);
            wr8(self + 0x36u, 0x27u);
            wr8(self + 0x37u, 0x33u);
        }
    }
    edx = (in_edx & 0xffffff00u) | 0x1au;
    edi = 0x6au;
L_1019cf30: ;
    t1 = rd8(edi + self - 0x41u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, edi, t1);
    t3 = g->edx;
    if ((int32_t)(edi + 1u) <= 137)
    {
        eax = t2;
        edx = t3;
        edi = edi + 1u;
        goto L_1019cf30;
    }
    eax = t2;
    edx = t3;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1019cfa0u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ce70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019ce70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
