/* f_0x10087bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087bc0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x10087b20u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_10087bcc;
    }
    return 0u;
L_10087bcc: ;
    eax = 0u;
    ecx = 0u;
L_10087bd0: ;
    if (rd8(COW_IMG(0x10482fecu) + ecx) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10482fecu) + ecx);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10482fecu) + ecx);
        eax = eax + 1u;
    }
    if ((int32_t)(ecx + 1u) < 128)
    {
        ecx = ecx + 1u;
        goto L_10087bd0;
    }
    ecx = 0u;
L_10087be6: ;
    if (rd8(COW_IMG(0x1048306cu) + ecx) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x1048306cu) + ecx);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x1048306cu) + ecx);
        eax = eax + 1u;
    }
    if ((int32_t)(ecx + 1u) < 128)
    {
        ecx = ecx + 1u;
        goto L_10087be6;
    }
    esi = COW_IMG(0x104830f8u);
L_10087c01: ;
    ecx = 0u;
    edx = rd32(esi);
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_10087c05: ;
    if ((edx & 1u << (ecx & 0x1fu)) != 0u)
    {
        eax = eax + 1u;
    }
    if ((int32_t)(ecx + 1u) < 32)
    {
        cf = ecx + 1u < 0x20u;
        pf = PARITY((uint8_t)(ecx - 0x1fu));
        zf = ecx == 0x1fu;
        sf = (int32_t)(ecx - 0x1fu) < 0;
        of = ((ecx + 1u ^ 0x20u) & (ecx + 1u ^ ecx - 0x1fu)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_10087c05;
    }
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10483118u))
    {
        esi = esi + 4u;
        goto L_10087c01;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10087bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
