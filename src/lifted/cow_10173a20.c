/* f_0x10173a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10173a20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd32(COW_IMG(0x10621a08u)) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = rd32(COW_IMG(0x10621a08u));
        edi = 0u;
        goto L_10173a64;
    }
    edx = rd32(COW_IMG(0x10621a08u));
    edi = 0u;
L_10173a32: ;
    if ((int32_t)rd32(edx + 8u) <= 0)
    {
        eax = rd32(edx + 4u) + 0x40u;
        ecx = rd32(edx + 8u);
    }
    else
    {
        eax = rd32(edx + 4u) + 0x40u;
        ecx = rd32(edx + 8u);
        eax = eax + 0x24u;
        esi = ecx;
L_10173a44: ;
        if (rd8(eax) == 0x4du) goto L_10173a50;
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        if ((uint8_t)ecx != 0x6du) goto L_10173a58;
L_10173a50: ;
        if (rd32(eax + 4u) == 0u)
        {
            ecx = rd32(eax + 4u);
        }
        else
        {
            ecx = rd32(eax + 4u);
            edi = edi + 1u;
        }
L_10173a58: ;
        if (esi != 1u)
        {
            eax = eax + 0x40u;
            esi = esi - 1u;
            goto L_10173a44;
        }
        eax = eax + 0x40u;
    }
    if (rd32(edx) != 0u)
    {
        edx = rd32(edx);
        goto L_10173a32;
    }
    edx = rd32(edx);
L_10173a64: ;
    wr32(self + 4u, 0u);
    wr32(self + 8u, edi);
    if (edi != 0u)
    {
        g->esp = sp0 - 0x10u;
        t1 = cow_call_regs(g, COW_IMG(0x10028640u), eax, ecx, edx, 1, 2, edi << 6u, 4u);
        wr32(self + 4u, t1);
        if (rd32(COW_IMG(0x10621a08u)) == 0u) goto L_10173ad1;
        edx = rd32(COW_IMG(0x10621a08u));
        ebp = t1;
L_10173a8f: ;
        if ((int32_t)rd32(edx + 8u) <= 0) goto L_10173acb;
        eax = rd32(edx + 4u) + 0x40u;
        ecx = rd32(edx + 8u);
        ebx = 0u;
L_10173a9e: ;
        if (rd8(eax + 0x24u) == 0x4du) goto L_10173aab;
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x24u);
        if ((uint8_t)ecx != 0x6du) goto L_10173ac0;
L_10173aab: ;
        if (rd32(eax + 0x28u) != 0u)
        {
            esi = eax;
            edi = ebp;
            ecx = 0x10u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ebp = ebp + 0x40u;
        }
L_10173ac0: ;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(edx + 8u))
        {
            eax = eax + 0x40u;
            ecx = rd32(edx + 8u);
            ebx = ebx + 1u;
            goto L_10173a9e;
        }
L_10173acb: ;
        if (rd32(edx) != 0u)
        {
            edx = rd32(edx);
            goto L_10173a8f;
        }
    }
L_10173ad1: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10173a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10173a20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
