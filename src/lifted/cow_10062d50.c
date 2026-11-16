/* f_0x10062d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10062d50(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = in_eax;
L_10062d5c: ;
    if ((uint8_t)arg3 == 0u)
    {
        edi = rd32(arg1 + 0x6cu);
    }
    else
    {
        eax = arg1;
        edi = rd32(arg1 + 0x68u);
    }
L_10062d70: ;
    if (edi == 0u) goto L_10062dcf;
    g->eax = eax;
    g->edx = rd32(edi);
    t1 = rd32(edi);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), edi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        goto L_10062d9f;
    }
    edx = t3;
    esi = t2;
    g->esp = sp0 - 0x10u;
    t4 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x1032b108u));
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        goto L_10062d9f;
    }
    edx = t5;
    if (rd32(esi + 0xf0u) == self) goto L_10062dad;
    eax = self;
L_10062d9f: ;
    if ((uint8_t)arg3 == 0u)
    {
        edi = rd32(edi + 0x30u);
    }
    else
    {
        edi = rd32(edi + 0x2cu);
    }
    goto L_10062d70;
L_10062dad: ;
    if ((uint8_t)arg3 == 0u)
    {
        g->eax = self;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x1003b830u), esi + 0x30u, 1, arg2);
        eax = t7;
    }
    else
    {
        g->eax = self;
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, COW_IMG(0x1003b7b0u), esi + 0x30u, 1, arg2);
        eax = t6;
    }
    goto L_10062d5c;
L_10062dcf: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10062d50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
