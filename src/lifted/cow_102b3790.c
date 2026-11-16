/* f_0x102b3790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102b3790(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    const uint32_t in_edi = g->edi;
    const double xin0 = ST(0);

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_102b3806;
    }
    esi = rd32(rd32(sp0 + 4u) + 0x34u);
    if (rd32(esi + 0x14u) == 0u)
    {
        eax = rd32(esi + 0x14u);
        goto L_102b3806;
    }
    eax = rd32(esi + 0x14u);
    g->ecx = eax;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 4u, COW_IMG(0x103bfd88u), 0x2f0u, in_edi);
    t2 = g->ecx;
    if ((int32_t)rd32(esi + 0x14u) <= 0)
    {
        ecx = t2;
        ebx = t1;
        edi = rd32(esi + 0x14u);
        goto L_102b37cf;
    }
    eax = 0u;
    ecx = t2;
    ebx = t1;
    edi = rd32(esi + 0x14u);
L_102b37c7: ;
    wr32(eax * 4u + ebx, eax);
    if ((int32_t)(eax + 1u) < (int32_t)edi)
    {
        eax = eax + 1u;
        goto L_102b37c7;
    }
L_102b37cf: ;
    t3 = rd32(esi + 0x14u);
    t4 = rd32(esi + 0x54u);
    g->eax = t4;
    g->ecx = ecx;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x1028a750u), 2, t4, t3);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    fpush(g, xin0);
    g->esp = sp0 - 0x14u;
    t8 = cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 1u, edi, ebx);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, COW_IMG(0x1028bbf0u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103bfd88u), 0x300u);
    t17 = g->edx;
    g->edx = t17;
    g->top = (g->top + 1u) & 7u;
    return t16;
L_102b3806: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103bfd80u));
    wr32(sp0 + 4u, COW_IMG(0x103beaa4u));
    g->esp = sp0;
    g->edx = t20;
    return cow_tailcall(g, COW_IMG(0x102858b0u), t18, t19, t20);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3790(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
