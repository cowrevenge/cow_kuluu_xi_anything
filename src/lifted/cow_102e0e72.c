/* f_0x102e0e72 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102e0e72(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self + 4u, 0u);
    wr32(self, 0u);
    wr32(self + 8u, arg3);
    if ((uint16_t)arg3 == 0u) goto L_102e0f83;
    if ((uint16_t)arg3 > 5u) goto L_102e0f83;
    if ((arg3 & 0xfff00000u) != 0u) goto L_102e0f83;
    wr32(arg1 + 0x40u, arg3 & 0x80000u);
    g->eax = arg3 & 0x80000u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x102e690bu), 1, arg1);
    t2 = g->edx;
    wr32(self + 4u, t1);
    if (t1 == 0u)
    {
        edx = t2;
        goto L_102e0f59;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x102e690bu), 1, arg2);
    t4 = g->edx;
    wr32(self, t3);
    if (t3 == 0u)
    {
        edx = t4;
        goto L_102e0f59;
    }
    eax = t3;
    edx = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_stdcall(g, COW_IMG(0x102e22afu), 1, eax);
    t6 = g->edx;
    if ((int32_t)t5 < 0)
    {
        edx = t6;
        ebx = t5;
        goto L_102e0f5e;
    }
    eax = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x102defd5u), self, 0);
    t8 = g->edx;
    if ((int32_t)t7 >= 0)
    {
        edx = t8;
        goto L_102e0f55;
    }
    eax = t7;
    edx = t8;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_stdcall(g, COW_IMG(0x102df10du), 0);
    t10 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        edx = t10;
        goto L_102e0f55;
    }
    eax = t9;
    edx = t10;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_stdcall(g, COW_IMG(0x102df1feu), 0);
    t12 = g->edx;
    if ((int32_t)t11 >= 0)
    {
        edx = t12;
        goto L_102e0f55;
    }
    eax = t11;
    edx = t12;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_stdcall(g, COW_IMG(0x102df400u), 0);
    t14 = g->edx;
    if ((int32_t)t13 >= 0)
    {
        edx = t14;
        goto L_102e0f55;
    }
    eax = t13;
    edx = t14;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_stdcall(g, COW_IMG(0x102df604u), 0);
    t16 = g->edx;
    if ((int32_t)t15 >= 0)
    {
        edx = t16;
        goto L_102e0f55;
    }
    eax = t15;
    edx = t16;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_stdcall(g, COW_IMG(0x102dfa27u), 0);
    t18 = g->edx;
    if ((int32_t)t17 >= 0)
    {
        edx = t18;
        goto L_102e0f55;
    }
    eax = t17;
    edx = t18;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_stdcall(g, COW_IMG(0x102dffb9u), 0);
    t20 = g->edx;
    if ((int32_t)t19 >= 0)
    {
        edx = t20;
        goto L_102e0f55;
    }
    eax = t19;
    edx = t20;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_stdcall(g, COW_IMG(0x102e039fu), 0);
    t22 = g->edx;
    if ((int32_t)t21 >= 0)
    {
        edx = t22;
        goto L_102e0f55;
    }
    eax = t21;
    edx = t22;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t23 = cow_stdcall(g, COW_IMG(0x102e0ad0u), 0);
    t24 = g->edx;
    if ((int32_t)t23 >= 0)
    {
        edx = t24;
        goto L_102e0f55;
    }
    eax = t23;
    edx = t24;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_stdcall(g, COW_IMG(0x102dd932u), 0);
    t26 = g->edx;
    if ((int32_t)t25 < 0)
    {
        edx = t26;
        goto L_102e0f59;
    }
    edx = t26;
L_102e0f55: ;
    ebx = 0u;
L_102e0f5e: ;
    if (rd32(self + 4u) != 0u)
    {
        ecx = rd32(self + 4u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t27 = g->edx;
        wr32(self + 4u, 0u);
        edx = t27;
    }
    if (rd32(self) != 0u)
    {
        ecx = rd32(self);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t28 = g->edx;
        wr32(self, 0u);
        edx = t28;
    }
    eax = ebx;
L_102e0f88: ;
    g->edx = edx;
    return eax;
L_102e0f59: ;
    ebx = 0x80004005u;
    goto L_102e0f5e;
L_102e0f83: ;
    eax = 0x8876086cu;
    edx = in_edx;
    goto L_102e0f88;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e0e72(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e0e72(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
