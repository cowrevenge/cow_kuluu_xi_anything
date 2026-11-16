/* f_0x102006b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102006b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    if ((int32_t)rd32(self + 0x54u) <= 1)
    {
        eax = in_eax;
        ecx = self;
        esi = in_esi;
    }
    else
    {
        edx = rd32(self + 0x54u);
        if ((int32_t)edx <= 1)
        {
            eax = edx;
            ecx = rd32(edx * 0x54u + rd32(self + 0x68u) + 0x48u);
            esi = edx * 0x54u + rd32(self + 0x68u);
        }
        else
        {
            eax = edx;
            ecx = rd32(edx * 0x54u + rd32(self + 0x68u) + 0x48u);
            esi = edx * 0x54u + rd32(self + 0x68u);
            edi = rd32(self + 0x68u);
            ebx = rd32(ecx + 0x4cu);
            ecx = eax * 0x54u + edi - 0xcu;
L_102006f5: ;
            if ((int32_t)rd32(rd32(ecx) + 0x4cu) < (int32_t)ebx) goto L_10200705;
            if ((int32_t)(eax - 1u) > 1)
            {
                eax = eax - 1u;
                ecx = ecx - 0x54u;
                goto L_102006f5;
            }
            eax = eax - 1u;
            ecx = ecx - 0x54u;
        }
L_10200705: ;
        if ((int32_t)edx > (int32_t)eax)
        {
            edi = sp0 - 0x54u;
            ecx = 0x15u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ebx = edx * 0x54u;
            edx = edx - eax;
L_10200725: ;
            esi = ebx + rd32(self + 0x68u) - 0x54u;
            edi = ebx + rd32(self + 0x68u);
            ecx = 0x15u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            if (edx != 1u)
            {
                edx = edx - 1u;
                ebx = ebx - 0x54u;
                goto L_10200725;
            }
            t1 = rd32(self + 0x68u);
            esi = sp0 - 0x54u;
            edi = eax * 0x54u + rd32(self + 0x68u);
            ecx = 0x15u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            eax = t1;
        }
    }
    wr32(sp0 - 0x68u, 1u);
    t2 = rd32(self + 0x54u) + 1u;
    t3 = rd32(self + 0x54u);
    t4 = rd32(self + 0x68u);
    wr32(self + 0x54u, t2);
    t5 = (ecx & 0xffff0000u) | (uint16_t)(t3 + 1u);
    wr32(sp0 - 0x6cu, t5);
    wr32(sp0 - 0x70u, t4);
    g->esi = esi;
    g->esp = sp0 - 0x64u;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t4, t5, 1u);
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102006b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102006b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
