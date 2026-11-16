/* f_0x1029cb00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1029cb00(Guest* g)
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
    uint32_t t21;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr8(COW_IMG(0x109f8269u), 0u);
    if (arg1 != 0u) goto L_1029cb16;
    return in_eax & 0xffffff00u;
L_1029cb16: ;
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, arg1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1029cc00u), 2, arg1, sp0 + 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        goto L_1029cb53;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0xcu, 0x96u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t5 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b4684u));
    g->esp = sp0 - 0x14u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4684u), arg1);
    g->esi = rd32(sp0 - 8u);
    return t6 & 0xffffff00u;
L_1029cb53: ;
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr8(COW_IMG(0x109f826au), (uint8_t)((arg1 != 2u) - 1u));
    g->ecx = ecx;
    g->edx = (uint8_t)((arg1 != 2u) - 1u);
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10292420u), 4, sp0 - 4u, 4u, 1u, arg1);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 1u)
    {
        edx = t9;
        goto L_1029cba8;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0xcu, 0x9fu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc7e8u));
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc7e8u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    return t13 & 0xffffff00u;
L_1029cba8: ;
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, arg2);
    g->ecx = arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10292420u), 4, arg2, 4u, 1u, arg1);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 1u)
    {
        eax = t14;
        edx = t16;
        goto L_1029cbe5;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    wr32(sp0 - 0xcu, 0xa0u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc7e8u));
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc7e8u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    return t20 & 0xffffff00u;
L_1029cbe5: ;
    t21 = rd32(sp0 - 8u);
    wr8(COW_IMG(0x109f8269u), rd8(sp0 - 4u) & 1u);
    g->esi = t21;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029cb00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029cb00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
