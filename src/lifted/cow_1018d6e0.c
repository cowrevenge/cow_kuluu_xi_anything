/* f_0x1018d6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018d6e0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t zf;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(self + 4u) <= 0)
    {
        edx = in_edx;
        ebx = rd32(self + 4u);
        goto L_1018d734;
    }
    ebx = rd32(self + 4u);
    ecx = self;
    edx = in_edx;
    ebp = 0u;
    edi = self + 8u;
L_1018d6f5: ;
    eax = edi;
    esi = arg1;
L_1018d6fb: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1018d71f;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)edx == 0u) goto L_1018d71b;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1018d71f;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)edx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1018d6fb;
    }
L_1018d71b: ;
    eax = 0u;
L_1018d724: ;
    if (eax == 0u) goto L_1018d78e;
    if ((int32_t)(ebp + 1u) < (int32_t)ebx)
    {
        ebp = ebp + 1u;
        edi = edi + 0x10u;
        goto L_1018d6f5;
    }
L_1018d734: ;
    if ((int32_t)ebx < 8)
    {
        wr32(self + 4u, ebx + 1u);
    }
    if ((int32_t)(rd32(self + 4u) - 1u) > 0)
    {
        eax = rd32(self + 4u) - 1u;
        edx = eax << 4u;
        ebx = eax;
        edi = eax * 0x10u + self - 8u;
L_1018d750: ;
        eax = edi;
L_1018d757: ;
        t3 = rd8(eax);
        wr8(eax + 0x10u, (uint8_t)t3);
        if ((uint8_t)t3 != 0u)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t3;
            goto L_1018d757;
        }
        edx = (edx & 0xffffff00u) | t3;
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            edi = edi - 0x10u;
            goto L_1018d750;
        }
    }
    eax = arg1;
L_1018d770: ;
    t4 = rd8(eax);
    wr8(eax + self - arg1 + 8u, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t4;
        goto L_1018d770;
    }
    wr8(self + 0x10cu, 1u);
L_1018d781: ;
    return 1u;
L_1018d71f: ;
    eax = -cf + 1u - cf;
    goto L_1018d724;
L_1018d78e: ;
    if (ebp == 0u) goto L_1018d781;
    zf = ebp == 0u;
    sf = (int32_t)ebp < 0;
    if (!(zf || sf))
    {
        edx = ebp << 4u;
        ebx = ebp;
        edi = ebp * 0x10u + self - 8u;
L_1018d7a3: ;
        eax = edi;
L_1018d7aa: ;
        t1 = rd8(eax);
        wr8(eax + 0x10u, (uint8_t)t1);
        if ((uint8_t)t1 != 0u)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t1;
            goto L_1018d7aa;
        }
        edx = (edx & 0xffffff00u) | t1;
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            edi = edi - 0x10u;
            goto L_1018d7a3;
        }
    }
    eax = arg1;
L_1018d7c3: ;
    t2 = rd8(eax);
    wr8(eax + self - arg1 + 8u, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t2;
        goto L_1018d7c3;
    }
    wr8(self + 0x10cu, 1u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018d6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018d6e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
