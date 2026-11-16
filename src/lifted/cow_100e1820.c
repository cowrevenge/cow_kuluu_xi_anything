/* f_0x100e1820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e1820(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 4360u);

    wr32(sp0 - 0x10b4u, in_ebx);
    wr32(sp0 - 0x10b8u, in_ebp);
    wr32(sp0 - 0x10bcu, in_esi);
    if (arg1 == 0u)
    {
        edx = in_edx;
        edi = in_edi;
        goto L_100e1988;
    }
    if (arg3 <= 8u)
    {
        edx = in_edx;
        edi = in_edi;
        goto L_100e198f;
    }
    wr32(sp0 - 0x10c0u, in_edi);
    wr32(sp0 - 0x10c4u, sp0 - 0x10b0u);
    g->eax = sp0 - 0x10b0u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10c0u;
    t1 = cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x10b0u);
    t2 = g->edx;
    wr32(sp0 - 0x10c8u, 0x14u);
    wr32(sp0 - 0x10ccu, arg1 + 0x1e8cu);
    wr32(sp0 - 0x10d0u, sp0 - 0x10b0u);
    g->ecx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x103cu;
    t3 = cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, arg1 + 0x1e8cu, 0x14u, sp0 - 0x10b0u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u)}, g->ecx, g->edx, g->eax, 148u);
    t4 = g->ecx;
    wr32(sp0 - 0x10d4u, sp0 - 0x10b0u);
    g->esp = sp0 - 0x1040u;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, sp0 - 0x10b0u, arg1 + 0x1e8cu, 0x14u, sp0 - 0x10b0u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u)}, g->ecx, g->edx, g->eax, 148u);
    t5 = rd32(sp0 - 0x1058u);
    t6 = rd32(sp0 - 0x1054u);
    t7 = rd32(sp0 - 0x1050u);
    wr32(arg1 + 0x1e8cu, t5);
    wr32(arg1 + 0x1e70u, t5);
    wr32(arg1 + 0x1e90u, t6);
    t8 = rd32(sp0 - 0x104cu);
    wr32(arg1 + 0x1e94u, t7);
    wr32(arg1 + 0x1e98u, t8);
    if (arg3 + 0xcu == 0u)
    {
        ecx = t8;
        esi = 0u;
    }
    else
    {
        ecx = t8;
        esi = ((arg3 + 0xbu) >> 6u) * 0x40u + 0x40u;
    }
    wr32(sp0 - 0x10c4u, sp0 - 0x10b0u);
    t9 = rd32(arg1 + 0x1e88u);
    wr32(arg2 + esi - 0xcu, t9);
    g->eax = sp0 - 0x10b0u;
    g->esp = sp0 - 0x10c0u;
    t10 = cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x10b0u);
    wr32(sp0 - 0x10c8u, esi - 0x10u);
    wr32(sp0 - 0x10ccu, arg2 + 8u);
    wr32(sp0 - 0x10d0u, sp0 - 0x10b0u);
    g->ecx = esi - 0x10u;
    g->edx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x103cu;
    cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, arg2 + 8u, esi - 0x10u, sp0 - 0x10b0u, rd32(sp0 - 0x10c0u), rd32(sp0 - 0x10bcu), rd32(sp0 - 0x10b8u), rd32(sp0 - 0x10b4u), rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u)}, g->ecx, g->edx, g->eax, 148u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x10d4u, sp0 - 0x10b0u);
    g->esp = sp0 - 0x1040u;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, sp0 - 0x10b0u, arg2 + 8u, rd32(sp0 - 0x10c8u), sp0 - 0x10b0u, rd32(sp0 - 0x10c0u), rd32(sp0 - 0x10bcu), rd32(sp0 - 0x10b8u), rd32(sp0 - 0x10b4u), rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u)}, g->ecx, g->edx, g->eax, 148u);
    t13 = rd32(sp0 - 0x1058u);
    t14 = rd32(sp0 - 0x1054u);
    wr32(arg2 + esi - 8u, t13);
    t15 = rd32(sp0 - 0x1050u);
    wr32(arg2 + esi - 4u, t14);
    t16 = rd32(sp0 - 0x104cu);
    wr32(arg2 + esi, t15);
    wr32(arg2 + esi + 4u, t16);
    wr32(sp0 - 0x10d8u, sp0 - 0x10b0u);
    g->ecx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x10d4u;
    cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x10b0u);
    t17 = g->ecx;
    wr32(sp0 - 0x10dcu, 0x14u);
    wr32(sp0 - 0x10e0u, arg1 + 0x1e60u);
    wr32(sp0 - 0x10e4u, sp0 - 0x10b0u);
    g->eax = sp0 - 0x10b0u;
    g->edx = arg1 + 0x1e60u;
    g->esp = sp0 - 0x1050u;
    t18 = cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, arg1 + 0x1e60u, 0x14u, sp0 - 0x10b0u, sp0 - 0x10b0u, sp0 - 0x10b0u, arg2 + 8u, rd32(sp0 - 0x10c8u), sp0 - 0x10b0u, rd32(sp0 - 0x10c0u), rd32(sp0 - 0x10bcu), rd32(sp0 - 0x10b8u), rd32(sp0 - 0x10b4u), rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u)}, g->ecx, g->edx, g->eax, 148u);
    t19 = g->edx;
    wr32(sp0 - 0x10e8u, sp0 - 0x10b0u);
    g->ecx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x1054u;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, sp0 - 0x10b0u, arg1 + 0x1e60u, 0x14u, sp0 - 0x10b0u, sp0 - 0x10b0u, sp0 - 0x10b0u, arg2 + 8u, rd32(sp0 - 0x10c8u), sp0 - 0x10b0u, rd32(sp0 - 0x10c0u), rd32(sp0 - 0x10bcu), rd32(sp0 - 0x10b8u), rd32(sp0 - 0x10b4u), rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u)}, g->ecx, g->edx, g->eax, 148u);
    t20 = g->ecx;
    wr32(sp0 - 0x10ecu, 0x10u);
    wr32(sp0 - 0x10f0u, sp0 - 0x1058u);
    wr32(sp0 - 0x10f4u, 0x1048u);
    wr32(sp0 - 0x10f8u, sp0 - 0x1048u);
    g->edx = sp0 - 0x1058u;
    g->esp = sp0 - 0x10e8u;
    t21 = cow_thiscall_cdecl(g, COW_IMG(0x100dc710u), t20, 4, sp0 - 0x1048u, 0x1048u, sp0 - 0x1058u, 0x10u);
    t22 = g->edx;
    wr32(sp0 - 0x10fcu, esi);
    wr32(sp0 - 0x1100u, arg2 + 8u);
    wr32(sp0 - 0x1104u, sp0 - 0x1048u);
    g->esp = sp0 - 0x10f0u;
    cow_cdecl(g, COW_IMG(0x100dca00u), 5, sp0 - 0x1048u, arg2 + 8u, esi, sp0 - 0x1048u, 0x1048u);
    t23 = rd32(arg1 + 0x1e70u);
    wr32(arg2 + esi + 8u, t23);
    if (esi + 0xcu == 0u)
    {
        edx = t23;
        edi = rd32(sp0 - 0x10c0u);
        goto L_100e1988;
    }
    edx = t23;
    esi = esi + 0xcu;
    edi = rd32(sp0 - 0x10c0u);
    g->ebx = rd32(sp0 - 0x10b4u);
    g->esi = rd32(sp0 - 0x10bcu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x10b8u);
    g->edx = edx;
    return esi;
L_100e1988: ;
L_100e198f: ;
    g->edi = edi;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e1820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e1820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
