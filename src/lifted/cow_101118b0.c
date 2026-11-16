/* f_0x101118b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101118b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)arg3 < 3u)
    {
        edx = in_edx;
        goto L_1011192c;
    }
    g->ebx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf8cu));
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_1011192c;
    }
    edx = t2;
    if ((int32_t)(uint16_t)arg3 > (int32_t)((uint8_t)arg1 + 2u))
    {
        ecx = arg2 + (uint8_t)arg1 * 8u + 0x10u;
    }
    else
    {
        ecx = arg2 + 0x10u;
    }
    if (rd32(arg2 + 0xcu) == 0u) goto L_10111904;
    eax = rd32(arg2 + 0xcu);
    if (rd32(eax + 4u) == 0u)
    {
        edx = rd32(eax + 4u);
        goto L_10111904;
    }
    edx = rd32(eax + 4u);
    eax = edx;
L_10111909: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t4 = g->edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_fastcall(g, COW_IMG(0x101114d0u), self, t4, 2, t3, ecx);
    t6 = g->edx;
    if (t5 == 0u) goto L_101119df;
    edx = t6;
    g->ebx = in_ebx;
    g->edx = edx;
    return 0u;
L_10111904: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_10111909;
L_1011192c: ;
    if ((uint16_t)arg3 < 5u) goto L_10111a3f;
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf84u));
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_1011195a;
    }
    edx = t9;
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf7cu));
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        edx = t12;
        goto L_10111a3f;
    }
    ecx = t11;
    edx = t12;
L_1011195a: ;
    if (rd32(arg2 + 0xcu) == 0u) goto L_1011196c;
    eax = rd32(arg2 + 0xcu);
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_1011196c;
    }
    ecx = rd32(eax + 4u);
    eax = ecx;
L_10111971: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    eax = t13;
    esi = rd32(self + 0x34u);
L_1011197d: ;
    if (rd32(esi + 4u) == 0u) goto L_101119df;
    if (rd32(esi + 8u) == 0u) goto L_101119df;
    ecx = rd32(esi + 8u);
    if (rd32(rd32(esi) + 4u) == eax)
    {
        edx = rd32(esi);
        goto L_10111996;
    }
    esi = ecx;
    goto L_1011197d;
L_1011196c: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_10111971;
L_10111996: ;
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf84u));
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        edx = t16;
        goto L_101119f9;
    }
    ecx = t15;
    edx = t16;
    if (rd32(rd32(esi) + 0x24u) != 0u)
    {
        esi = rd32(esi);
    }
    else
    {
        esi = rd32(esi);
        g->esp = sp0 - 8u;
        t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_edi, in_esi);
        t18 = g->edx;
        if (t17 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t17;
            edx = t18;
            g->esp = sp0 - 0x10u;
            t19 = cow_thiscall(g, COW_IMG(0x1010a6b0u), eax, 0);
            eax = t19;
        }
        wr32(esi + 0x24u, eax);
    }
    ecx = rd32(esi + 0x24u);
L_101119da: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1010a7e0u), ecx, 3, arg2 + 0x10u, arg2 + 0x18u, arg2 + 0x20u);
L_101119df: ;
    g->ebx = self;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall(g, COW_IMG(0x101110d0u), self, 4, arg1, arg2, arg3, arg4);
    t29 = g->edx;
    g->ebx = in_ebx;
    g->edx = t29;
    return t28;
L_101119f9: ;
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf7cu));
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u) goto L_101119df;
    ecx = t21;
    edx = t22;
    if (rd32(rd32(esi) + 0x28u) != 0u)
    {
        esi = rd32(esi);
    }
    else
    {
        esi = rd32(esi);
        g->esp = sp0 - 8u;
        t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_edi, in_esi);
        t24 = g->edx;
        if (t23 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t23;
            edx = t24;
            g->esp = sp0 - 0x10u;
            t25 = cow_thiscall(g, COW_IMG(0x1010a6b0u), eax, 0);
            eax = t25;
        }
        wr32(esi + 0x28u, eax);
    }
    ecx = rd32(esi + 0x28u);
    goto L_101119da;
L_10111a3f: ;
    if ((uint16_t)arg3 < 2u) goto L_101119df;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, COW_IMG(0x10111450u), self, 2, arg2, arg2 + 8u);
    t27 = g->edx;
    if (t26 == 0u) goto L_101119df;
    edx = t27;
    g->ebx = in_ebx;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101118b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101118b0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
