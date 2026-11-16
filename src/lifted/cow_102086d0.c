/* f_0x102086d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102086d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t3;
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
    const uint32_t in_edi = g->edi;

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebp = 0x2001u;
L_102086db: ;
    t1 = (eax & 0xffffff00u) | rd8(self + 0x22u);
    g->edi = self;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x100fcc50u), 3, t1, 0x1201u, ebp - 0x2000u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
    }
    else
    {
        edx = t4;
        esi = ebp - 0x2000u;
        g->edx = edx;
        t5 = rd32(COW_IMG(0x10621808u));
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t5, 1, ebp);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            eax = t6;
            ecx = t7;
        }
        else
        {
            eax = t6;
            edx = t8;
            if (rd16(rd32(eax + 0x14f4u)) != 0u)
            {
                ecx = rd32(eax + 0x14f4u);
            }
            else
            {
                ecx = rd32(eax + 0x14f4u);
                t9 = (edx & 0xffffff00u) | rd8(self + 0x22u);
                g->edi = self;
                g->edx = t9;
                g->esp = sp0 - 0x10u;
                t10 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t9, 0x1200u, 0u);
                t11 = g->edx;
                if (esi != (uint8_t)t10)
                {
                    edx = t11;
                    ebx = (-(rd32(self + 0x10u) != ebp) & 0x4060u) - 0x7f7fbfe0u;
                }
                else
                {
                    edx = t11;
                    ebx = 0x80509050u;
                }
                t12 = rd32(self + 0xcu) + rd32(self + 4u) * 0x54u;
                g->eax = rd32(self + 4u) * 0x15u;
                t13 = rd32(self + 4u);
                g->esp = sp0 - 0x10u;
                t14 = cow_fastcall(g, COW_IMG(0x101f4b20u), t12, edx, 4, 0u, 0x15u, ebp, 0x80808080u);
                t15 = g->edx;
                t16 = cow_fastcall(g, COW_IMG(0x101f4b20u), t12, t15, 4, 1u, 0x19u, ebp, ebx);
                t17 = g->ecx;
                t18 = g->edx;
                g->ecx = t17;
                t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x286u);
                t20 = g->ecx;
                wr32(t12 + 0x4cu, t19);
                wr32(t12 + 0x48u, ebp);
                t21 = rd32(self + 4u) + 1u;
                wr32(self + 4u, t21);
                eax = t21;
                ecx = t20;
            }
        }
    }
    if ((int32_t)(ebp - 0x1fffu) < 256)
    {
        edx = ebp - 0x1fffu;
        ebp = ebp + 1u;
        goto L_102086db;
    }
    g->edi = in_edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102086d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102086d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
