/* f_0x10269570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10269570(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
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

    if (rd32(self + 0x60u) != 0u)
    {
        t1 = rd32(self + 0x50u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(COW_IMG(0x103291fcu)), self, 1, t1);
        t2 = g->edx;
        if ((int32_t)rd32(self + 0x28u) <= 0)
        {
            edx = t2;
            ebx = 0u;
            edi = 0u;
        }
        else
        {
            edx = t2;
            t3 = rd32(self + 0x20u);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, t3);
            t5 = g->edx;
            edx = t5;
            ebx = rd32(t4 + 0x1cu);
            edi = rd32(t4 + 0x18u);
        }
        if (rd32(self + 0x64u) != 0u)
        {
            if ((int32_t)rd32(self + 0x40u) > 0)
            {
                t6 = rd32(self + 0x38u);
                g->esp = sp0 - 0xcu;
                t7 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, t6);
                if ((edi | ebx) == 0u)
                {
                    eax = rd32(self + 0x6cu) + rd32(t7 + 0x1cu) + (rd32(self + 0x68u) + rd32(t7 + 0x18u) < rd32(t7 + 0x18u));
                    ecx = rd32(self + 0x68u) + rd32(t7 + 0x18u);
                    goto L_102695e1;
                }
                eax = rd32(self + 0x6cu) + rd32(t7 + 0x1cu) + (rd32(self + 0x68u) + rd32(t7 + 0x18u) < rd32(t7 + 0x18u));
                ecx = rd32(self + 0x68u) + rd32(t7 + 0x18u);
                if ((int32_t)eax > (int32_t)ebx) goto L_102695e5;
                sf = (int32_t)(eax - ebx) < 0;
                of = ((eax ^ ebx) & (eax ^ eax - ebx)) >> 0x1fu;
                if (sf != of) goto L_102695e1;
                if (ecx >= edi) goto L_102695e5;
L_102695e1: ;
                ebx = eax;
                edi = ecx;
            }
        }
L_102695e5: ;
        if ((int32_t)ebx >= 0)
        {
            zf = ebx == 0u;
            sf = (int32_t)ebx < 0;
            if (!zf && !sf) goto L_102695ef;
            if (edi == 0u) goto L_10269631;
L_102695ef: ;
            if (edi != rd32(self + 0x58u)) goto L_102695f9;
            if (ebx == rd32(self + 0x5cu)) goto L_10269631;
L_102695f9: ;
            if (rd32(self + 0x54u) != 0u)
            {
                ecx = rd32(self + 0x54u);
                t8 = rd32(self + 0x60u);
                g->edx = rd32(t8);
                t9 = rd32(t8);
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(t9 + 0x18u), ecx, 2, t8, ecx);
                t10 = g->ecx;
                t11 = g->edx;
                t12 = rd32(self + 0x50u);
                cow_thiscall(g, rd32(COW_IMG(0x103291fcu)), t10, 1, t12);
            }
            t13 = rd32(self + 0x50u);
            t14 = rd32(self + 0x60u);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(rd32(self + 0x60u)) + 0x10u), t13, 7, t14, edi, ebx, 0u, 0u, t13, self + 0x54u);
            wr32(self + 0x58u, edi);
            wr32(self + 0x5cu, ebx);
        }
    }
L_10269631: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10269570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
