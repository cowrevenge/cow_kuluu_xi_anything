/* f_0x10250f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10250f30(Guest* g)
{
    double d28;
    double d30;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_10250f52;
    if ((rd8(arg1) & 0x10u) == 0u) goto L_10250f52;
    g->eax = in_eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
L_10250f52: ;
    if (rd32(arg1 + 0x18u) != 0u) goto L_10250f7a;
    eax = rd32(arg1 + 0x18u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(arg1 + 0x18u);
    g->eax = t4;
    g->esp = sp0 - 0x14u;
    t5 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
L_10250f7a: ;
    g->esp = sp0 - 8u;
    t6 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
    t7 = g->edx;
    t8 = rd32(arg1 + 0x18u);
    wr32(arg1 + 0x10u, t6);
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x101c4d30u), rd32(COW_IMG(0x10662dccu)), 0);
    t9 = g->edx;
    t10 = rd32(arg1 + 0x14u);
    g->edx = t9;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x10285060u), t10, 2, t8, t10);
    t12 = g->edx;
    wr32(arg1 + 0x18u, t11);
    g->edx = t12;
    t13 = rd32(COW_IMG(0x10662dccu));
    cow_thiscall(g, COW_IMG(0x101c4d40u), t13, 0);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = cow_fastcall(g, COW_IMG(0x102750b0u), t14, t15, 0);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = t16 - rd32(arg1 + 0x10u);
    wr32(arg1 + 0x10u, t19);
    if (rd32(arg1 + 0x18u) != 0u)
    {
        ecx = t17;
        edx = t18;
        edi = t8;
        goto L_10250ff0;
    }
    eax = rd32(arg1 + 0x18u);
    ecx = t17;
    edi = t8;
    t20 = rd32(arg1 + 0x14u);
    g->ecx = ecx;
    g->edx = t20;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x10251040u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(arg1 + 0x14u, 0u);
    t23 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x10389748u), 0xbfu);
    wr32(arg1 + 0x18u, t23);
    return 0xffffffffu;
L_10250ff0: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x10389748u), 0xc4u);
    t24 = g->edx;
    t25 = rd32(arg1 + 0x18u);
    t26 = (rd32(arg1) & 0xffffff00u) | (rd32(arg1) & 0xfbu) | 8u;
    wr32(arg1, t26);
    g->ecx = t25;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10284f40u), 1, t25);
    t27 = g->ecx;
    d28 = cow_take_float(g);
    if (rd32(rd32(arg1 + 0x18u) + 0x20u) != 0x40feeeefu)
    {
        ecx = t27;
    }
    else
    {
        eax = rd32(arg1 + 0x18u);
        ecx = t27;
        wr32(eax + 0x20u, 0x40fdddecu);
    }
    t29 = rd32(arg1 + 0x18u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10284f40u), 1, t29);
    d30 = cow_take_float(g);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10250f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10250f30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
