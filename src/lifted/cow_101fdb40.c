/* f_0x101fdb40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101fdb40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd8(rd32(self + 0x38u));
    t2 = rd32(sp0 + 4u) + (uint32_t)(int8_t)rd8(self + 0x34u);
    t3 = rd32(sp0 + 8u);
    t4 = rd8(self + 0x35u);
    t5 = rd8(self + 0x34u);
    wr32(sp0 + 4u, t2);
    t6 = t3 + (uint32_t)(int8_t)t4;
    wr32(sp0 + 8u, t6);
    if (!(rd8(self + 0x36u) & 1u))
    {
        edx = COW_IMG(0x103850a8u) + (t1 >> 4u) * 0xau;
        ebx = t2;
        esi = (uint32_t)(int8_t)t5;
        edi = (uint32_t)(int8_t)t4;
        eax = 5u - (uint32_t)(int8_t)rd8(edx);
        ebp = (uint32_t)(int8_t)rd8(edx + 1u);
    }
    else
    {
        edx = COW_IMG(0x103850a8u) + (t1 >> 4u) * 0xau;
        ebx = t2;
        esi = (uint32_t)(int8_t)t5;
        edi = (uint32_t)(int8_t)t4;
        eax = 5u - (uint32_t)(int8_t)rd8(edx + 1u);
        ebp = (uint32_t)(int8_t)rd8(edx);
    }
    if ((int32_t)ebx >= 0)
    {
        edx = 5u - ebp;
        if ((int32_t)rd32(sp0 + 4u) <= (int32_t)eax)
        {
            ebx = rd32(sp0 + 4u);
            eax = (eax & 0xffffff00u) | (uint8_t)ebx;
        }
        wr8(self + 0x34u, (uint8_t)eax);
    }
    else
    {
        edx = 5u - ebp;
        wr8(self + 0x34u, 0u);
    }
    if ((int32_t)rd32(sp0 + 8u) >= 0)
    {
        eax = rd32(sp0 + 8u);
        if ((int32_t)eax <= (int32_t)edx)
        {
            wr8(self + 0x35u, (uint8_t)eax);
        }
        else
        {
            wr8(self + 0x35u, (uint8_t)edx);
        }
    }
    else
    {
        eax = rd32(sp0 + 8u);
        wr8(self + 0x35u, 0u);
    }
    if (esi != (uint32_t)(int8_t)rd8(self + 0x34u))
    {
        edx = (uint32_t)(int8_t)rd8(self + 0x34u);
        goto L_101fdbdf;
    }
    edx = (uint32_t)(int8_t)rd8(self + 0x34u);
    if (edi == (uint32_t)(int8_t)rd8(self + 0x35u)) goto L_101fdbe4;
    eax = (uint32_t)(int8_t)rd8(self + 0x35u);
L_101fdbdf: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
L_101fdbe4: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fdb40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fdb40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
