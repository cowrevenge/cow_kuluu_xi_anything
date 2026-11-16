/* f_0x1010b4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1010b4a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t35;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)arg3 <= 2u)
    {
        edx = in_edx;
        goto L_1010b587;
    }
    g->ebx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf24u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        edx = t3;
        goto L_1010b587;
    }
    ecx = t2;
    edx = t3;
    if (rd32(arg2 + 0x14u) == 0u) goto L_1010b4e3;
    eax = rd32(arg2 + 0x14u);
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_1010b4e3;
    }
    ecx = rd32(eax + 4u);
    eax = ecx;
L_1010b4e8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
    t5 = g->edx;
    g->ebx = self;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10109570u), arg2 + 8u, 1, COW_IMG(0x1036bf4cu));
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        edx = t8;
        edi = t4;
        goto L_1010b525;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    edi = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x101085e0u), 1, 0x94u);
    t10 = g->edx;
    if (t9 == 0u)
    {
        edx = t10;
        goto L_1010b5ea;
    }
    eax = t9;
    edx = t10;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x101117e0u), eax, 1, edi);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_1010b553: ;
    if (eax == 0u) goto L_1010b5e6;
    ebx = eax;
    esi = rd32(self + 0x44u);
L_1010b564: ;
    if (rd32(esi + 4u) == 0u)
    {
        ecx = rd32(esi + 4u);
        goto L_1010b591;
    }
    ecx = rd32(esi + 4u);
    if (rd32(esi + 8u) == 0u) goto L_1010b591;
    if (rd32(rd32(esi) + 4u) == edi)
    {
        edx = rd32(esi);
        goto L_1010b57f;
    }
    edx = rd32(esi);
    cf = rd32(rd32(esi) + 4u) < edi;
    if (cf) goto L_1010b591;
    esi = ecx;
    goto L_1010b564;
L_1010b4e3: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_1010b4e8;
L_1010b525: ;
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, COW_IMG(0x10109570u), arg2 + 8u, 1, COW_IMG(0x1036bf3cu));
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        edx = t15;
        goto L_1010b5ea;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t16 = cow_cdecl(g, COW_IMG(0x101085e0u), 1, 0x6cu);
    t17 = g->edx;
    if (t16 == 0u)
    {
        edx = t17;
        goto L_1010b5ea;
    }
    eax = t16;
    edx = t17;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x10111b40u), eax, 1, edi);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    goto L_1010b553;
L_1010b57f: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(ebx)), ebx, 1, 1u);
    t20 = g->edx;
    edx = t20;
L_1010b587: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return 0u;
L_1010b591: ;
    if (rd32(esi + 8u) == 0u)
    {
        eax = rd32(esi + 8u);
    }
    else
    {
        eax = rd32(esi + 8u);
        esi = eax;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_cdecl(g, COW_IMG(0x101085e0u), 1, 0xcu);
    t22 = g->edx;
    if (t21 == 0u)
    {
        edx = t22;
        eax = 0u;
    }
    else
    {
        eax = t21;
        edx = t22;
        wr32(eax, ebx);
        wr32(eax + 8u, 0u);
        wr32(eax + 4u, 0u);
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1010ba90u), eax, 1, esi);
    t23 = g->edx;
    wr16(self + 0x32u, (uint16_t)(rd16(self + 0x32u) + 1u));
    if (edi <= rd32(self + 0x28u))
    {
        edx = t23;
    }
    else
    {
        edx = t23;
        wr32(self + 0x28u, edi);
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101092c0u), arg4, 1, COW_IMG(0x1036bf34u));
    t24 = g->edx;
    g->ebx = in_ebx;
    g->edx = t24;
    return ebx;
L_1010b5e6: ;
L_1010b5ea: ;
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t25 = cow_thiscall(g, COW_IMG(0x10109570u), arg2 + 8u, 1, COW_IMG(0x1036bf2cu));
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        edx = t27;
        goto L_1010b587;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    if (edi == 0u) goto L_1010b587;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t28 = cow_cdecl(g, COW_IMG(0x101085e0u), 1, 0x18u);
    t29 = g->edx;
    if (t28 == 0u)
    {
        edx = t29;
        goto L_1010b587;
    }
    eax = t28;
    edx = t29;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t30 = cow_thiscall(g, COW_IMG(0x101100e0u), eax, 1, edi);
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 == 0u)
    {
        edx = t32;
        goto L_1010b587;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    esi = t30;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t33 = cow_cdecl(g, COW_IMG(0x101085e0u), 1, 0xcu);
    if (t33 == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = t33;
        wr32(eax, esi);
        wr32(eax + 8u, 0u);
        wr32(eax + 4u, 0u);
    }
    t34 = rd32(self + 0x68u);
    wr32(eax + 8u, self + 0x64u);
    wr32(eax + 4u, t34);
    if (t34 == 0u)
    {
        edx = t34;
    }
    else
    {
        ecx = t34;
        edx = t34;
        wr32(ecx + 8u, eax);
    }
    if (rd32(eax + 8u) != 0u)
    {
        ecx = rd32(eax + 8u);
        wr32(ecx + 4u, eax);
    }
    wr16(self + 0x56u, (uint16_t)(rd16(self + 0x56u) + 1u));
    if (edi > rd32(self + 0x4cu))
    {
        wr32(self + 0x4cu, edi);
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101092c0u), arg4, 1, COW_IMG(0x1036bf2cu));
    t35 = g->edx;
    g->ebx = in_ebx;
    g->edx = t35;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010b4a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010b4a0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
