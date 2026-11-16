/* f_0x10252630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10252630(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x18u) != 0u)
    {
        eax = rd32(arg1 + 0x18u);
        goto L_102526c8;
    }
    if (rd32(arg1 + 0x1cu) != 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        goto L_102526c8;
    }
    if (rd32(arg1 + 0x20u) != 0u)
    {
        eax = rd32(arg1 + 0x20u);
        goto L_102526c8;
    }
    eax = rd32(arg1 + 0x20u);
    wr32(arg1 + 4u, arg2);
    g->eax = eax;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101c4820u), t1, 6, arg2, 0u, 0u, arg1, COW_IMG(0x10252860u), COW_IMG(0x10252710u));
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        eax = t2;
        edx = t4;
        goto L_1025268e;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t5 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
L_1025268e: ;
    g->eax = eax;
    g->edx = edx;
    t6 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x101c4820u), t6, 6, arg2 + 1u, 0u, 0u, arg1, COW_IMG(0x102528a0u), COW_IMG(0x102527b0u));
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 >= 0) goto L_102526c2;
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t10 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
L_102526c2: ;
    return 0u;
L_102526c8: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = rd32(arg1 + 0x18u);
    g->eax = t13;
    g->edx = t12;
    g->esp = sp0 - 0x18u;
    t14 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t15 = g->edx;
    t16 = rd32(arg1 + 0x1cu);
    g->ecx = t16;
    g->esp = sp0 - 0x20u;
    t17 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t18 = g->ecx;
    t19 = rd32(arg1 + 0x20u);
    g->esp = sp0 - 0x28u;
    t20 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
