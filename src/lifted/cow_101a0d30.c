/* f_0x101a0d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a0d30(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        goto L_101a0d4a;
    }
    eax = rd32(self + 0xcu);
    return eax & 0xffffff00u;
L_101a0d4a: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t1 = cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x1cu), in_edx, 1, 0xffffffffu);
    t2 = g->edx;
    t3 = rd32(self + 0x14u);
    if (rd32(self + 0x10u) == rd32(self + 0x14u))
    {
        eax = t1;
        edx = t2;
        zf = rd32(self + 0x10u) == rd32(self + 0x14u);
    }
    else
    {
        ecx = t3;
        edi = rd32(self + 0x10u);
        loc_c = t3;
        t4 = rd32(self + 4u);
        loc_4 = t4;
L_101a0d74: ;
        if (rd32(arg1 + 4u) != rd32(edi * 0x124u + loc_4 + 4u)) goto L_101a0de8;
        ebx = loc_4;
        ebp = edi * 0x124u + loc_4;
        eax = arg1 + 8u;
        esi = ebp + 8u;
L_101a0d8f: ;
        if (rd8(eax) != rd8(esi))
        {
            cf = rd8(eax) < rd8(esi);
            goto L_101a0db3;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        ebx = (ebx & 0xffffff00u) | rd8(eax);
        if ((uint8_t)ecx == 0u) goto L_101a0daf;
        if (rd8(eax + 1u) != rd8(esi + 1u))
        {
            cf = rd8(eax + 1u) < rd8(esi + 1u);
            goto L_101a0db3;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
        if ((uint8_t)ecx != 0u)
        {
            eax = eax + 2u;
            esi = esi + 2u;
            goto L_101a0d8f;
        }
L_101a0daf: ;
        eax = 0u;
L_101a0db8: ;
        if (eax != 0u) goto L_101a0de0;
        if (rd32(arg1 + 0x10cu) == 0u)
        {
            eax = rd32(arg1 + 0x10cu);
            goto L_101a0dfc;
        }
        eax = rd32(arg1 + 0x10cu);
        if (eax == rd32(ebp + 0x10cu)) goto L_101a0dfc;
        if (rd32(arg1 + 0x108u) == 0u)
        {
            eax = rd32(arg1 + 0x108u);
            goto L_101a0dfc;
        }
        eax = rd32(arg1 + 0x108u);
        if (eax == rd32(ebp + 0x108u)) goto L_101a0dfc;
L_101a0de0: ;
        ecx = loc_c;
L_101a0de8: ;
        if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 8u))
        {
            eax = rd32(self + 8u);
            edi = edi + 1u;
        }
        else
        {
            eax = rd32(self + 8u);
            edi = 0u;
        }
        if (edi != ecx) goto L_101a0d74;
L_101a0e04: ;
        edx = arg1;
        zf = edi == ecx;
    }
    if (!zf)
    {
        ecx = rd32(self + 0x1cu);
        goto L_101a0e1c;
    }
    ecx = rd32(self + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t5 = cow_fastcall(g, COW_IMG(0x101b9530u), ecx, edx, 0);
    t6 = g->edx;
    g->edx = t6;
    return t5 & 0xffffff00u;
L_101a0db3: ;
    eax = -cf + 1u - cf;
    goto L_101a0db8;
L_101a0dfc: ;
    ecx = loc_c;
    goto L_101a0e04;
L_101a0e1c: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t7 = cow_fastcall(g, COW_IMG(0x101b9530u), ecx, edx, 0);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a0d30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
