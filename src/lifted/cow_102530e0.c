/* f_0x102530e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102530e0(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 <= 0) goto L_10253158;
    if ((rd8(arg3) & 0x10u) != 0u) goto L_10253158;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10289940u), 2, arg3 + 0x18u, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1025312c;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10389cd0u), arg3 + 0x18u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 0x20u;
    t6 = cow_cdecl(g, COW_IMG(0x10276110u), 3, arg1, COW_IMG(0x10389ca0u), 0x7du);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1025312c: ;
    if (arg1 != 0u)
    {
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t8 = cow_cdecl(g, COW_IMG(0x10276110u), 3, arg1, COW_IMG(0x10389ca0u), 0x81u);
        t9 = g->ecx;
        eax = t8;
        ecx = t9;
    }
    t10 = rd32(arg3) | 8u;
    wr32(arg3, t10);
    g->edx = t10;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x102531d0u), eax, g->ecx, g->edx, 1, 3, arg3, in_edi, in_esi);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_10253158: ;
    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, arg1, COW_IMG(0x10389ca0u), 0x6du);
        t13 = g->edx;
        edx = t13;
    }
    t14 = (rd32(arg3) & 0xffffff00u) | (rd32(arg3) & 0xefu);
    wr32(arg3, t14);
    g->edx = edx;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102530e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102530e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
