/* f_0x101d4310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d4310(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) != 0u)
    {
        ebx = rd32(sp0 + 4u);
        wr32(sp0 + 4u, 0u);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x2cu;
        t1 = cow_thiscall(g, COW_IMG(0x101ceac0u), ebx, 0);
        t2 = g->edx;
        t3 = cow_thiscall(g, COW_IMG(0x101ceae0u), ebx, 0);
        t4 = ((int32_t)(0xau - t1) >= 0) * 2u - 1u;
        t5 = ((int32_t)(0xdu - t3) >= 0) * 2u - 1u;
        t6 = (0xdu - t3 ^ (uint32_t)((int32_t)(0xdu - t3) >> 0x1fu)) - (uint32_t)((int32_t)(0xdu - t3) >> 0x1fu);
        t7 = (0xau - t1 ^ (uint32_t)((int32_t)(0xau - t1) >> 0x1fu)) - (uint32_t)((int32_t)(0xau - t1) >> 0x1fu);
        if ((int32_t)((0xau - t1 ^ (uint32_t)((int32_t)(0xau - t1) >> 0x1fu)) - (uint32_t)((int32_t)(0xau - t1) >> 0x1fu)) <= (int32_t)t6)
        {
            eax = t7;
            ecx = t6;
            edx = (uint32_t)((int32_t)(0xau - t1) >> 0x1fu);
            esi = t1;
            edi = t3;
            loc_4 = 0xdu - t3;
            loc_c = t4;
            loc_10 = t5;
            loc_18 = t6;
            loc_14 = t7;
            if (edi != 0xdu)
            {
L_101d4431: ;
                t19 = eax + rd32(sp0 + 4u);
                t20 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, t19);
                if ((int32_t)(eax + t20) <= (int32_t)ecx)
                {
                    edx = t19;
                    edi = edi + loc_10;
                }
                else
                {
                    edx = t19;
                    edi = edi + loc_10;
                    wr32(sp0 + 4u, edx - loc_4);
                    esi = esi + loc_c;
                }
                t21 = rd32(ebx + 0x10u);
                g->eax = t21;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t22 = cow_thiscall(g, COW_IMG(0x101d5e00u), self, 4, t21, esi, edi, 0u);
                t23 = g->edx;
                t24 = rd32(ebx + 0x10u);
                g->eax = t24;
                g->edx = t23;
                t25 = cow_thiscall(g, COW_IMG(0x101d5e00u), self, 4, t24, esi, edi, 1u);
                t26 = g->edx;
                if (t22 == 0u)
                {
                    eax = t25;
                    edx = t26;
                }
                else
                {
                    eax = t25;
                    edx = t26;
                    ebp = t22;
                    loc_8 = t25;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    cow_call_regs(g, COW_IMG(0x101cea80u), eax, ebp, g->edx, 0, 1, 0x20202020u);
                    t27 = g->edx;
                    eax = loc_8;
                    edx = t27;
                }
                if (eax != 0u)
                {
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t28 = cow_call_regs(g, COW_IMG(0x101cea80u), eax, eax, g->edx, 0, 1, 0x20202020u);
                    t29 = g->edx;
                    eax = t28;
                    edx = t29;
                }
                if (edi != 0xdu) goto L_101d4429;
            }
        }
        else
        {
            eax = t7;
            ecx = t6;
            edx = (uint32_t)((int32_t)(0xau - t1) >> 0x1fu);
            ebp = 0xau - t1;
            esi = t1;
            edi = t3;
            loc_c = t4;
            loc_10 = t5;
            loc_18 = t6;
            loc_14 = t7;
            if (esi != 0xau)
            {
L_101d43a2: ;
                t8 = ecx + rd32(sp0 + 4u);
                t9 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, t8);
                if ((int32_t)(ecx + t9) <= (int32_t)eax)
                {
                    edx = t8;
                    esi = esi + loc_c;
                }
                else
                {
                    edx = t8;
                    esi = esi + loc_c;
                    wr32(sp0 + 4u, edx - ebp);
                    edi = edi + loc_10;
                }
                t10 = rd32(ebx + 0x10u);
                g->eax = t10;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t11 = cow_thiscall(g, COW_IMG(0x101d5e00u), self, 4, t10, esi, edi, 0u);
                t12 = g->edx;
                t13 = rd32(ebx + 0x10u);
                g->eax = t13;
                g->edx = t12;
                t14 = cow_thiscall(g, COW_IMG(0x101d5e00u), self, 4, t13, esi, edi, 1u);
                t15 = g->edx;
                if (t11 == 0u)
                {
                    eax = t14;
                    edx = t15;
                }
                else
                {
                    eax = t14;
                    ecx = t11;
                    edx = t15;
                    loc_4 = t14;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    cow_call_regs(g, COW_IMG(0x101cea80u), eax, ecx, g->edx, 0, 1, 0x20202020u);
                    t16 = g->edx;
                    eax = loc_4;
                    edx = t16;
                }
                if (eax != 0u)
                {
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t17 = cow_call_regs(g, COW_IMG(0x101cea80u), eax, eax, g->edx, 0, 1, 0x20202020u);
                    t18 = g->edx;
                    eax = t17;
                    edx = t18;
                }
                if (esi != 0xau) goto L_101d439a;
            }
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t30 = cow_thiscall(g, COW_IMG(0x101cead0u), ebx, 0);
        t31 = g->edx;
        if (t30 == 0u)
        {
            eax = t30;
            edx = t31;
        }
        else
        {
            eax = t30;
            edx = t31;
            g->eax = eax;
            g->edx = edx;
            t32 = rd32(ebx + 0x10u);
            g->esp = sp0 - 0x30u;
            t33 = cow_thiscall(g, COW_IMG(0x101ceae0u), ebx, 0);
            t34 = g->edx;
            g->edx = t34;
            g->esp = sp0 - 0x34u;
            t35 = cow_thiscall(g, COW_IMG(0x101ceac0u), ebx, 0);
            t36 = g->edx;
            g->edx = t36;
            g->esp = sp0 - 0x2cu;
            t37 = cow_thiscall(g, COW_IMG(0x101d5e00u), self, 4, t32, t35, t33, 0u);
            t38 = g->edx;
            if (t37 == 0u)
            {
                eax = t37;
                edx = t38;
            }
            else
            {
                eax = t37;
                edx = t38;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t39 = cow_call_regs(g, COW_IMG(0x101cea80u), eax, eax, g->edx, 0, 1, 0x80808080u);
                t40 = g->edx;
                eax = t39;
                edx = t40;
            }
        }
        g->esp = sp0 - 0x2cu;
        cow_call_regs(g, COW_IMG(0x101cea80u), eax, ebx, g->edx, 0, 1, 0x80808080u);
    }
    return;
L_101d439a: ;
    eax = loc_14;
    ecx = loc_18;
    goto L_101d43a2;
L_101d4429: ;
    eax = loc_14;
    ecx = loc_18;
    goto L_101d4431;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d4310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d4310(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
