/* f_0x102795c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102795c0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(arg1 + 0x58u) < (int32_t)rd32(arg1 + 0x5cu))
    {
        edi = rd32(arg1 + 0x58u);
    }
    else
    {
        edi = rd32(arg1 + 0x58u);
        t1 = edi * 4u + 4u;
        t2 = rd32(arg1 + 0x54u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), self, 4, t2, t1, COW_IMG(0x103b37ecu), 0x567u);
        t4 = g->edx;
        t5 = rd32(arg1 + 0x4cu);
        wr32(arg1 + 0x54u, t3);
        g->esp = sp0 - 8u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t5, 9, t5, t1, COW_IMG(0x103b37ecu), 0x569u, t2, t1, COW_IMG(0x103b37ecu), 0x567u, in_ebx);
        t7 = g->ecx;
        t8 = rd32(arg1 + 0x50u);
        wr32(arg1 + 0x4cu, t6);
        g->edx = t8;
        g->esp = sp0 - 0x18u;
        t9 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t7, 9, t8, t1, COW_IMG(0x103b37ecu), 0x56bu, t5, t1, COW_IMG(0x103b37ecu), 0x569u, t2);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(arg1 + 0x50u, t9);
        t12 = rd32(arg1 + 0x98u);
        g->esp = sp0 - 0x28u;
        t13 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t10, 9, t12, t1, COW_IMG(0x103b37ecu), 0x56du, t8, t1, COW_IMG(0x103b37ecu), 0x56bu, t5);
        wr32(arg1 + 0x98u, t13);
    }
    wr32(edi * 4u + rd32(arg1 + 0x54u), 0u);
    wr32(edi * 4u + rd32(arg1 + 0x4cu), arg2);
    t14 = rd32(arg1 + 0x98u);
    wr32(edi * 4u + t14, arg4);
    if ((uint8_t)arg5 == 0u) goto L_102796ac;
    ecx = t14;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 1u, 0x40u, COW_IMG(0x103b37ecu), 0x574u, in_edi);
    wr32(edi * 4u + rd32(arg1 + 0x50u), t15);
    t16 = rd32(edi * 4u + rd32(arg1 + 0x50u));
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027eb30u), 5, t16, arg3, 1u, 0x40u, COW_IMG(0x103b37ecu));
    t17 = rd32(edi * 4u + rd32(arg1 + 0x54u)) | 0x20u;
    wr32(edi * 4u + rd32(arg1 + 0x54u), t17);
    t18 = rd32(arg1 + 0x58u) + 1u;
    wr32(arg1 + 0x58u, t18);
    return;
L_102796ac: ;
    wr32(edi * 4u + rd32(arg1 + 0x50u), arg3);
    t19 = rd32(arg1 + 0x58u) + 1u;
    wr32(arg1 + 0x58u, t19);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102795c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102795c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
