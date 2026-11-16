/* f_0x101c8450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c8450(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if ((int32_t)arg1 < 0) goto L_101c86bb;
    if ((int32_t)arg1 >= (int32_t)rd32(self)) goto L_101c86bb;
    if ((int32_t)rd32(self + 4u) <= 0)
    {
        ecx = rd32(self + 4u);
        goto L_101c8483;
    }
    ecx = rd32(self + 4u);
    eax = 0u;
    edx = rd32(self + 8u);
L_101c8477: ;
    if (rd32(edx) == arg1) goto L_101c84ad;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        edx = edx + 0x1cu;
        goto L_101c8477;
    }
L_101c8483: ;
    if ((int32_t)ecx <= 0)
    {
        ebx = 0u;
    }
    else
    {
        eax = rd32(self + 8u) + 4u;
        edx = 0u;
        edi = ecx - 1u;
L_101c8498: ;
        if ((int32_t)rd32(eax) >= (int32_t)edi) goto L_101c85a7;
        if ((int32_t)(edx + 1u) < (int32_t)ecx)
        {
            eax = eax + 0x1cu;
            edx = edx + 1u;
            goto L_101c8498;
        }
        ebx = 0u;
    }
L_101c85a9: ;
    if (rd32(ebx * 0x1cu + rd32(self + 8u) + 8u) != 2u)
    {
        edi = ebx * 0x1cu;
        goto L_101c861b;
    }
    edx = rd32(self + 8u);
    ebx = ebx * 0x1cu + rd32(self + 8u);
    t16 = rd32(ebx + 0xcu);
    wr32(sp0 - 0x18u, t16);
    g->eax = t16;
    g->esp = sp0 - 0x14u;
    t17 = cow_thiscall(g, COW_IMG(0x101c5b30u), self + 0xcu, 1, t16);
    if (t17 == 0u) goto L_101c86bb;
    eax = t17;
    wr32(sp0 - 0x18u, rd32(ebx));
    wr32(sp0 - 0x1cu, sp0 + 4u);
    t18 = rd32(ebx);
    wr32(ebx + 8u, 0u);
    g->eax = eax;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0x14u;
    t19 = cow_thiscall(g, COW_IMG(0x10257ca0u), self + 0x58u, 2, sp0 + 4u, t18);
    t20 = g->edx;
    wr32(sp0 - 0x18u, t19);
    t21 = rd32(ebx + 0x14u);
    wr32(sp0 - 0x1cu, t21);
    g->eax = t21;
    g->edx = t20;
    t22 = cow_thiscall(g, COW_IMG(0x10257d00u), self + 0x58u, 2, t21, t19);
    t23 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    t24 = rd32(ebx + 0x14u);
    wr32(sp0 - 0x1cu, t24);
    t25 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, t24, 0u);
    t26 = rd32(sp0 - 0x10u);
    t27 = rd32(sp0 - 0x14u);
    wr32(ebx + 0x18u, t25);
    g->ebx = rd32(sp0 - 8u);
    g->esi = t26;
    g->edi = t27;
    g->ebp = rd32(sp0 - 0xcu);
    return 0u;
L_101c84ad: ;
    if (eax == 0xffffffffu) goto L_101c8483;
    ecx = 0u;
    ebx = 0u;
    edi = eax * 0x1cu;
L_101c84c2: ;
    if ((int32_t)rd32(ecx + rd32(self + 8u) + 4u) >= (int32_t)rd32(edi + rd32(self + 8u) + 4u))
    {
        edx = rd32(ecx + rd32(self + 8u) + 4u);
    }
    else
    {
        eax = rd32(self + 8u);
        edx = rd32(ecx + rd32(self + 8u) + 4u);
        wr32(eax + ecx + 4u, edx + 1u);
        edx = edx + 1u;
    }
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 4u))
    {
        ecx = ecx + 0x1cu;
        ebx = ebx + 1u;
        goto L_101c84c2;
    }
    wr32(edi + rd32(self + 8u) + 4u, 0u);
    if (rd32(edi + rd32(self + 8u) + 8u) != 0u)
    {
        eax = edi + rd32(self + 8u);
        ecx = rd32(edi + rd32(self + 8u) + 8u);
        goto L_101c8505;
    }
    eax = edi + rd32(self + 8u);
    return rd32(eax + 0x18u);
L_101c8505: ;
    if (ecx != 2u) goto L_101c856e;
    t1 = rd32(eax + 0xcu);
    wr32(sp0 - 0x18u, t1);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x101c5b30u), self + 0xcu, 1, t1);
    if (t2 == 0u) goto L_101c86bb;
    t3 = rd32(self + 8u);
    wr32(edi + t3 + 8u, 0u);
    t4 = rd32(edi + t3);
    wr32(sp0 - 0x18u, t4);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    g->eax = t3;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x10257ca0u), self + 0x58u, 2, sp0 + 4u, t4);
    t6 = g->edx;
    wr32(sp0 - 0x18u, t5);
    t7 = rd32(edi + t3 + 0x14u);
    wr32(sp0 - 0x1cu, t7);
    g->eax = t7;
    g->edx = t6;
    t8 = cow_thiscall(g, COW_IMG(0x10257d00u), self + 0x58u, 2, t7, t5);
    t9 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    t10 = rd32(edi + t3 + 0x14u);
    wr32(sp0 - 0x1cu, t10);
    t11 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, t10, 0u);
    wr32(edi + t3 + 0x18u, t11);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return rd32(edi + rd32(self + 8u) + 0x18u);
L_101c856e: ;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    g->eax = arg1;
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall(g, COW_IMG(0x10257ca0u), self + 0x58u, 2, sp0 + 4u, arg1);
    wr32(sp0 - 0x18u, t12);
    wr32(sp0 - 0x1cu, arg1);
    t13 = rd32(edi + rd32(self + 8u) + 0x14u);
    wr32(sp0 - 0x20u, t13);
    g->eax = rd32(self + 8u);
    t14 = rd32(self + 8u);
    t15 = cow_thiscall(g, COW_IMG(0x101c5a70u), self + 0xcu, 3, t13, arg1, t12);
    wr32(edi + rd32(self + 8u) + 0xcu, t15);
    edi = edi + rd32(self + 8u);
L_101c86a0: ;
    if ((int32_t)rd32(edi + 0xcu) >= 0) goto L_101c86b8;
    wr32(edi + 8u, 1u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return 0u;
L_101c85a7: ;
    ebx = edx;
    goto L_101c85a9;
L_101c861b: ;
    if ((int32_t)ecx <= 0)
    {
        edx = 0u;
    }
    else
    {
        ecx = 0u;
        edx = 0u;
L_101c8623: ;
        t28 = rd32(ecx + rd32(self + 8u) + 4u) + 1u;
        wr32(ecx + rd32(self + 8u) + 4u, t28);
        if ((int32_t)(edx + 1u) < (int32_t)rd32(self + 4u))
        {
            ecx = ecx + 0x1cu;
            edx = edx + 1u;
            goto L_101c8623;
        }
        edx = edx + 1u;
    }
    if (rd32(edi + rd32(self + 8u) + 0x14u) != 0u)
    {
        eax = rd32(edi + rd32(self + 8u) + 0x14u);
        ecx = rd32(self + 8u);
        wr32(sp0 - 0x18u, eax);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
    }
    wr32(sp0 - 0x18u, arg1);
    wr32(edi + rd32(self + 8u) + 4u, 0u);
    wr32(edi + rd32(self + 8u), arg1);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->eax = arg1;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x14u;
    t29 = cow_thiscall(g, COW_IMG(0x10257ca0u), self + 0x58u, 2, sp0 - 4u, arg1);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x18u, t29);
    g->esp = sp0 - 0xcu;
    t32 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t30, t31, 1, 3, t29, in_edi, in_esi);
    wr32(edi + rd32(self + 8u) + 0x14u, t32);
    wr32(sp0 - 0x18u, t29);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, t32);
    g->esp = sp0 - 0x14u;
    t33 = cow_thiscall(g, COW_IMG(0x101c5a70u), self + 0xcu, 3, t32, self, t29);
    wr32(edi + rd32(self + 8u) + 0xcu, t33);
    edi = edi + rd32(self + 8u);
    goto L_101c86a0;
L_101c86b8: ;
    wr32(edi + 8u, 2u);
L_101c86bb: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c8450(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
