/* f_0x1024c3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1024c3f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 308u);

    wr32(sp0 - 0x108u, in_ebx);
    wr32(sp0 - 0x10cu, in_ebp);
    wr32(sp0 - 0x110u, in_esi);
    if ((int32_t)rd32(self + 0x18u) < 1)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x18u);
        if ((int32_t)eax >= 24)
        {
            edx = in_edx;
        }
        else
        {
            t1 = rd32(self + 0x2cu);
            wr32(sp0 - 0x104u, t1);
            if ((cow_fsw(g, (double)(int32_t)t1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
            {
                edx = t1;
            }
            else
            {
                eax = cow_fsw(g, (double)(int32_t)t1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                edx = t1;
                t2 = rd32(self + 0x30u);
                wr32(sp0 - 0x104u, t2);
                if ((cow_fsw(g, (double)(int32_t)t2, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u)
                {
                    ecx = t2;
                    wr32(sp0 - 0x114u, 0u);
                    wr32(sp0 - 0x118u, 0u);
                    wr32(sp0 - 0x11cu, 0x80808080u);
                    wr32(sp0 - 0x120u, ecx);
                    wr32(sp0 - 0x124u, edx);
                    g->edx = edx;
                    g->esp = sp0 - 0x110u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + rd32(self + 0x28u) * 4u + 0x34u), 5, edx, ecx, 0x80808080u, 0u, 0u);
                    t3 = g->edx;
                    edx = t3;
                }
            }
        }
    }
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x114u, COW_IMG(0x1036c19cu));
        g->edx = edx;
        g->esp = sp0 - 0x110u;
        t4 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
        t5 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
            edi = in_edi;
        }
        else
        {
            eax = t4;
            edx = t5;
            ebx = t4;
            wr32(sp0 - 0x114u, 0u);
            wr32(sp0 - 0x118u, 0u);
            wr32(sp0 - 0x11cu, 0x80808080u);
            wr32(sp0 - 0x120u, 0x14u);
            wr32(sp0 - 0x124u, 0x14u);
            g->edx = edx;
            t6 = rd32(rd32(ebx) + 0x224u);
            g->esp = sp0 - 0x110u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), t6, 5, 0x14u, 0x14u, 0x80808080u, 0u, 0u);
            t7 = g->ecx;
            t8 = g->edx;
            g->ecx = t7;
            g->edx = t8;
            t9 = cow_stdcall(g, COW_IMG(0x100fc4e0u), 0);
            t10 = g->ecx;
            t11 = g->edx;
            if (t9 == 0u)
            {
                ecx = t10;
                edx = t11;
            }
            else
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                wr32(sp0 - 0x114u, 0x14u);
                wr32(sp0 - 0x118u, 0x3cu);
                wr32(sp0 - 0x11cu, eax);
                wr32(sp0 - 0x120u, ebx);
                g->edx = edx;
                g->esp = sp0 - 0x110u;
                cow_thiscall_cdecl(g, COW_IMG(0x1023b0f0u), ecx, 4, ebx, eax, 0x3cu, 0x14u);
                t12 = g->ecx;
                t13 = g->edx;
                ecx = t12;
                edx = t13;
            }
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x110u;
            t14 = cow_stdcall(g, COW_IMG(0x100f0fa0u), 0);
            t15 = g->ecx;
            t16 = g->edx;
            if (t14 == 0u)
            {
                eax = t14;
                edx = t16;
                edi = in_edi;
            }
            else
            {
                ecx = t15;
                ebp = t14;
                wr32(sp0 - 0x114u, in_edi);
                t17 = rd8(ebp + 4u);
                wr32(sp0 - 0x118u, t17);
                t18 = rd8(ebp + 7u);
                g->ecx = ecx;
                g->edx = t18;
                g->esp = sp0 - 0x114u;
                cow_cdecl(g, COW_IMG(0x100f0fb0u), 1, t17);
                t19 = g->ecx;
                t20 = g->edx;
                wr32(sp0 - 0x11cu, t18);
                g->ecx = t19;
                g->edx = t20;
                g->esp = sp0 - 0x118u;
                cow_cdecl(g, COW_IMG(0x100f0fb0u), 1, t18);
                t21 = g->ecx;
                t22 = g->edx;
                ecx = t21;
                edx = t22;
                esi = 0x2cu;
                edi = 2u;
L_1024c4dd: ;
                wr32(sp0 - 0x118u, COW_IMG(0x1037f448u));
                wr32(sp0 - 0x11cu, sp0 - 0x100u);
                g->edx = edx;
                g->esp = sp0 - 0x108u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037f448u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
                t23 = g->edx;
                wr32(sp0 - 0x120u, esi);
                wr32(sp0 - 0x124u, 0x5cu);
                wr32(sp0 - 0x128u, sp0 - 0x100u);
                wr32(sp0 - 0x12cu, ebx);
                g->edx = t23;
                g->esp = sp0 - 0x11cu;
                cow_thiscall_cdecl(g, COW_IMG(0x1023b0f0u), sp0 - 0x100u, 4, ebx, sp0 - 0x100u, 0x5cu, esi);
                t24 = g->ecx;
                t25 = g->edx;
                if (edi != 1u)
                {
                    ecx = t24;
                    edx = t25;
                    esi = esi + 0x10u;
                    edi = edi - 1u;
                    goto L_1024c4dd;
                }
                esi = esi + 0x10u;
                esi = esi + 8u;
                edi = ebp + 0x1cu;
                ebp = 7u;
L_1024c50e: ;
                t26 = rd16(edi) + (uint32_t)(int16_t)rd16(edi + 0xeu);
                wr32(sp0 - 0x118u, t26);
                wr32(sp0 - 0x11cu, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x120u, sp0 - 0x100u);
                g->ecx = sp0 - 0x100u;
                g->esp = sp0 - 0x10cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10352ff0u), t26, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
                t27 = g->ecx;
                wr32(sp0 - 0x124u, esi);
                wr32(sp0 - 0x128u, 0x36u);
                wr32(sp0 - 0x12cu, sp0 - 0x100u);
                wr32(sp0 - 0x130u, ebx);
                g->edx = sp0 - 0x100u;
                g->esp = sp0 - 0x120u;
                t28 = cow_thiscall_cdecl(g, COW_IMG(0x1023b0f0u), t27, 4, ebx, sp0 - 0x100u, 0x36u, esi);
                t29 = g->edx;
                if (ebp != 1u)
                {
                    ebp = ebp - 1u;
                    esi = esi + 0x10u;
                    edi = edi + 2u;
                    goto L_1024c50e;
                }
                eax = t28;
                edx = t29;
                edi = rd32(sp0 - 0x114u);
            }
        }
    }
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024c3f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
