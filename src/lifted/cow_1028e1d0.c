/* f_0x1028e1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1028e1d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(COW_IMG(0x103ba68cu)) < 0)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x103ba68cu));
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, self, in_edx, 1, 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(COW_IMG(0x103ba68cu), 0xffffffffu);
        ecx = t1;
        edx = t2;
    }
    if (rd32(rd32(sp0 + 4u) + 0x14u) == 0u)
    {
        edi = rd32(sp0 + 4u);
    }
    else
    {
        edi = rd32(sp0 + 4u);
        t3 = rd32(edi + 0x18u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t3, COW_IMG(0x103ba694u), 0x5du);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    if (rd32(edi + 0x20u) != 0u)
    {
        t6 = rd32(edi + 0x24u);
        g->ecx = t6;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t6, COW_IMG(0x103ba694u), 0x5fu);
        t7 = g->ecx;
        t8 = rd32(edi + 0x28u);
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t8, COW_IMG(0x103ba694u), 0x60u);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    if (rd32(edi + 0x44u) != 0u)
    {
        zf = rd32(edi + 0x44u) == 0u;
        sf = (int32_t)rd32(edi + 0x44u) < 0;
        wr32(sp0 + 4u, 0u);
        if (!(zf || sf))
        {
            esi = 0u;
L_1028e24d: ;
            if (rd32(esi + rd32(edi + 0x48u) + 4u) != 0u)
            {
                eax = rd32(edi + 0x48u);
                ecx = rd32(esi + rd32(edi + 0x48u) + 4u);
                zf = rd32(esi + rd32(edi + 0x48u) + 4u) == 0u;
                sf = (int32_t)rd32(esi + rd32(edi + 0x48u) + 4u) < 0;
                if (!(zf || sf))
                {
                    ebx = 0u;
                    ebp = 0u;
L_1028e260: ;
                    if (rd32(ebx + rd32(eax + esi + 0x28u) + 0xcu) != 0u)
                    {
                        ecx = rd32(ebx + rd32(eax + esi + 0x28u) + 0xcu);
                        eax = ebx + rd32(eax + esi + 0x28u);
                        g->esp = sp0 - 0x10u;
                        cow_cdecl(g, COW_IMG(0x10285760u), 1, eax);
                    }
                    if (rd32(ebx + rd32(esi + rd32(edi + 0x48u) + 0x28u) + 0x14u) == 0u)
                    {
                        ecx = rd32(edi + 0x48u);
                        edx = rd32(esi + rd32(edi + 0x48u) + 0x28u);
                    }
                    else
                    {
                        eax = rd32(ebx + rd32(esi + rd32(edi + 0x48u) + 0x28u) + 0x14u);
                        ecx = rd32(edi + 0x48u);
                        edx = rd32(esi + rd32(edi + 0x48u) + 0x28u);
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103ba694u), 0x6bu);
                        t11 = g->edx;
                        t12 = rd32(esi + rd32(edi + 0x48u) + 0x28u);
                        wr32(ebx + t12 + 0x14u, 0u);
                        ecx = t12;
                        edx = t11;
                    }
                    if ((int32_t)(ebp + 1u) < (int32_t)rd32(esi + rd32(edi + 0x48u) + 4u))
                    {
                        eax = rd32(edi + 0x48u);
                        ebx = ebx + 0x90u;
                        ebp = ebp + 1u;
                        goto L_1028e260;
                    }
                }
                t13 = rd32(esi + rd32(edi + 0x48u) + 0x28u);
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, t13, COW_IMG(0x103ba694u), 0x6fu);
                t14 = rd32(esi + rd32(edi + 0x48u) + 0x24u);
                g->edx = t14;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, t14, COW_IMG(0x103ba694u), 0x70u);
                t15 = g->edx;
                wr32(esi + rd32(edi + 0x48u) + 0x28u, 0u);
                wr32(esi + rd32(edi + 0x48u) + 0x24u, 0u);
                edx = t15;
            }
            t16 = rd32(sp0 + 4u) + 1u;
            t17 = rd32(edi + 0x44u);
            t18 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t16);
            if ((int32_t)(t18 + 1u) < (int32_t)t17)
            {
                esi = esi + 0x2cu;
                goto L_1028e24d;
            }
            ecx = t17;
        }
        t19 = rd32(edi + 0x48u);
        g->ecx = ecx;
        g->edx = t19;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t19, COW_IMG(0x103ba694u), 0x75u);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
    }
    if (rd32(edi + 0x34u) != 0u)
    {
        eax = rd32(edi + 0x34u);
        if ((int32_t)eax > 0)
        {
            ebx = 0u;
            esi = 0u;
L_1028e328: ;
            if (rd32(esi + rd32(edi + 0x40u) + 4u) != 0u)
            {
                eax = esi + rd32(edi + 0x40u);
                t22 = rd32(eax + 8u);
                g->ecx = t22;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, t22, COW_IMG(0x103ba694u), 0x7au);
                t23 = g->ecx;
                t24 = g->edx;
                ecx = t23;
                edx = t24;
            }
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(edi + 0x34u))
            {
                ebx = ebx + 1u;
                esi = esi + 0x30u;
                goto L_1028e328;
            }
        }
        t25 = rd32(edi + 0x40u);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t25, COW_IMG(0x103ba694u), 0x7du);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028e1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028e1d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
