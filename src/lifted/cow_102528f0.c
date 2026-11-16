/* f_0x102528f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102528f0(Guest* g)
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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

    if (arg1 == 0u) goto L_10252910;
    if ((rd8(arg1) & 4u) == 0u) goto L_10252910;
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
L_10252910: ;
    if (rd32(arg1 + 0x18u) == 0u)
    {
        eax = rd32(arg1 + 0x18u);
        goto L_102529eb;
    }
    if (rd32(arg1 + 0x1cu) == 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        goto L_102529eb;
    }
    g->esp = sp0 - 4u;
    t2 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
    t3 = g->edx;
    wr32(arg1 + 0x14u, t2);
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x101c4d30u), rd32(COW_IMG(0x10662dccu)), 0);
    t4 = g->edx;
    t5 = rd32(arg1 + 0x1cu);
    t6 = rd32(arg1 + 0x18u);
    g->edx = t4;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x10287fd0u), 3, t6, t5, in_esi);
    t8 = g->edx;
    wr32(arg1 + 0x20u, t7);
    g->edx = t8;
    t9 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101c4d40u), t9, 0);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = cow_fastcall(g, COW_IMG(0x102750b0u), t10, t11, 0);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = t12 - rd32(arg1 + 0x14u);
    wr32(arg1 + 0x14u, t15);
    if (rd32(arg1 + 0x20u) != 0u)
    {
        ecx = t13;
        edx = t14;
        goto L_102529bd;
    }
    ecx = t13;
    t16 = rd32(arg1 + 0x1cu);
    t17 = rd32(arg1 + 0x18u);
    g->edx = t16;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10389bfcu), t17);
    t18 = g->edx;
    t19 = rd32(arg1 + 0x18u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, 0u);
    g->ecx = t19;
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t19, COW_IMG(0x10389a74u), 0x152u);
    t21 = g->ecx;
    t22 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x18u, t20);
    g->esp = sp0 - 0x1cu;
    t23 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t22, COW_IMG(0x10389a74u), 0x153u);
    wr32(arg1 + 0x1cu, t23);
    return 0xffffffffu;
L_102529bd: ;
    t24 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x18u, 0u);
    g->esp = sp0 - 4u;
    t25 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t24, COW_IMG(0x10389a74u), 0x159u);
    t26 = rd32(arg1);
    wr32(arg1 + 0x1cu, t25);
    t27 = (t26 & 0xfffffffdu) | 4u;
    wr32(arg1, t27);
    return 0u;
L_102529eb: ;
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t28 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t29 = g->ecx;
    t30 = rd32(arg1 + 0x18u);
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t31 = g->ecx;
    t32 = g->edx;
    t33 = rd32(arg1 + 0x1cu);
    g->eax = t33;
    g->esp = sp0 - 0x18u;
    t34 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102528f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102528f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
