/* f_0x101e8260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101e8260(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(COW_IMG(0x10663564u), 0u);
    wr32(COW_IMG(0x10663560u), 0u);
    wr16(COW_IMG(0x10663568u), 0u);
    eax = COW_IMG(0x1066356bu);
L_101e827f: ;
    wr8(eax - 1u, 0u);
    wr8(eax, 0u);
    wr8(eax + 1u, 0u);
    if ((int32_t)(eax + 3u) < (int32_t)COW_IMG(0x10663583u))
    {
        eax = eax + 3u;
        goto L_101e827f;
    }
    eax = COW_IMG(0x10381b93u);
L_101e8295: ;
    wr8(eax - 1u, 3u);
    wr8(eax, 3u);
    if ((int32_t)(eax + 0x20u) < (int32_t)COW_IMG(0x10381c93u))
    {
        eax = eax + 0x20u;
        goto L_101e8295;
    }
    eax = eax + 0x20u;
    if (arg1 != 0u)
    {
        t1 = rd32(arg1 + 0x30u);
        wr32(COW_IMG(0x10663560u), t1);
        eax = 0u;
        ecx = 0u;
        esi = rd32(arg1 + 8u);
        cf = 0u;
        pf = PARITY(0u);
        zf = 1u;
        sf = 0u;
        of = 0u;
L_101e82bc: ;
        wr8(COW_IMG(0x10663564u) + eax, esi >> (ecx & 0x1fu) & 0xfu);
        if ((int32_t)(ecx + 4u) < 24)
        {
            eax = eax + 1u;
            cf = ecx + 4u < 0x18u;
            pf = PARITY((uint8_t)(ecx - 0x14u));
            zf = ecx == 0x14u;
            sf = (int32_t)(ecx - 0x14u) < 0;
            of = ((ecx + 4u ^ 0x18u) & (ecx + 4u ^ ecx - 0x14u)) >> 0x1fu;
            ecx = ecx + 4u;
            goto L_101e82bc;
        }
        ebx = (esi >> (ecx & 0x1fu) & 0xffffff00u) | (esi >> (ecx & 0x1fu) & 0xfu);
        ecx = COW_IMG(0x1066356bu);
        esi = arg1 + 0x10u;
L_101e82da: ;
        t2 = rd32(esi);
        wr8(ecx - 1u, t2 & 0x7fu);
        wr8(ecx, t2 >> 7u & 7u);
        wr8(ecx + 1u, t2 >> 0xau & 7u);
        if ((int32_t)(ecx + 3u) < (int32_t)COW_IMG(0x10663583u))
        {
            ecx = ecx + 3u;
            ebx = (t2 >> 7u & 0xffffff00u) | (t2 >> 7u & 7u);
            esi = esi + 4u;
            goto L_101e82da;
        }
        eax = (t2 >> 0xau & 0xffffff00u) | (t2 >> 0xau & 7u);
    }
    g->edx = 3u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e8260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
