/* f_0x100f6980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100f6980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, sp0 + 4u);
    wr32(sp0 - 0x5cu, arg1);
    g->esp = sp0 - 0x50u;
    t1 = cow_thiscall(g, COW_IMG(0x100f42d0u), self, 3, arg1, sp0 + 4u, 0u);
    if (t1 != 0x18u)
    {
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = t1;
        wr32(sp0 - 0x54u, in_esi);
        wr32(sp0 - 0x58u, in_edi);
L_100f69a3: ;
        wr32(sp0 - 0x5cu, arg1);
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        g->eax = eax;
        g->ecx = arg1;
        g->edx = sp0 - 0x48u;
        g->esp = sp0 - 0x58u;
        t2 = cow_cdecl(g, COW_IMG(0x1031046fu), 2, sp0 - 0x48u, arg1);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 != 0u)
        {
            edx = t4;
        }
        else
        {
            ecx = t3;
            edx = t4;
            t5 = rd32(sp0 - 6u);
            wr16(self + 0xe4u, (uint16_t)(rd16(self + 0xe4u) + 1u));
            if (!(t5 >> 8u & 1u))
            {
                if (rd16(self + 0xe6u) == 0u)
                {
                    ecx = (ecx & 0xffff0000u) | rd16(self + 0xe6u);
                    goto L_100f6a52;
                }
                ecx = (ecx & 0xffff0000u) | rd16(self + 0xe6u);
                if (rd32(sp0 - 0x14u) >= rd32(self + (uint16_t)ecx * 0x48u + 0xd4u))
                {
                    edx = (uint16_t)ecx * 9u;
                    goto L_100f6a52;
                }
                eax = (uint16_t)ecx;
                if ((int32_t)eax > 0)
                {
                    edx = eax * 0x48u + self + 0xa0u;
L_100f6a02: ;
                    if (rd32(sp0 - 0x14u) >= rd32(edx + 0x34u)) goto L_100f6a26;
                    if ((int32_t)eax < 4)
                    {
                        esi = edx;
                        edi = edx + 0x48u;
                        ecx = 0x12u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    }
                    if ((int32_t)(eax - 1u) > 0)
                    {
                        eax = eax - 1u;
                        edx = edx - 0x48u;
                        goto L_100f6a02;
                    }
                    eax = eax - 1u;
                }
L_100f6a26: ;
                esi = sp0 - 0x48u;
                edi = eax * 0x48u + self + 0xe8u;
                ecx = 0x12u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                if (rd16(self + 0xe6u) >= 4u)
                {
                    edx = eax * 9u;
                }
                else
                {
                    edx = eax * 9u;
                    eax = (eax & 0xffff0000u) | rd16(self + 0xe6u);
                    wr16(self + 0xe6u, (uint16_t)(eax + 1u));
                }
            }
        }
L_100f6a7a: ;
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, sp0 + 4u);
        wr32(sp0 - 0x64u, arg1);
        g->esp = sp0 - 0x58u;
        t6 = cow_thiscall(g, COW_IMG(0x100f42d0u), self, 3, arg1, sp0 + 4u, 0u);
        if (t6 == 0x18u)
        {
            eax = t6;
            goto L_100f69a3;
        }
        esi = rd32(sp0 - 0x54u);
        edi = rd32(sp0 - 0x58u);
    }
    g->esi = esi;
    g->edi = edi;
    return;
L_100f6a52: ;
    if ((uint16_t)ecx < 4u)
    {
        esi = sp0 - 0x48u;
        edi = self + (uint16_t)ecx * 0x48u + 0xe8u;
        ecx = 0x12u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(self + 0xe6u, (uint16_t)(rd16(self + 0xe6u) + 1u));
    }
    goto L_100f6a7a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100f6980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
